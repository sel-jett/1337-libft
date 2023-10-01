#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int     len;
    char    *str;
    int     i;
    int     j;

    if (!s1 && !s2)
        return (0);
    len = strlen(s1) + strlen(s2);
    str = malloc(sizeof(char) * len + 1);
    i = 0;
    j = 0;
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    char const *s1 = "";
    char const *s2 = "";
    printf("%s\n", ft_strjoin(s1, s2));
    return (0);
}