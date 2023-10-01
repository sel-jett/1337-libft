#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    char *needle;
    int i;
    int len;

    str = (char *)s1;
    needle = (char *)set;
    i = 0;

    while(needle[i])
    {
        if (str[0] == needle[i])
        {
            str++;
            i = 0;
        }
        else
        i++;
    }
    len = strlen(str) - 1;
    i = 0;
    while (needle[i])
    {
        if (str[len] == needle[i])
        {
            len--;
            i = 0;
        }
        else
            i++;
    }
    printf("%c\n", str[len]);
    printf("%d\n",len);
    i = 0;
    while(i < len)
    {
        printf("%c",str[i]);
        i++;
    }
    
    return str;
}

int main()
{
    char const *s1 = "lahjettiouisal";
    char const *s2 = "sal";
    printf("\n%s\n", ft_strtrim(s1, s2));
    return (0);
}