#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *ptr;
    int     check;

    i = 0;
    check = 0;
    int thg = strlen(s) - i;
    char const s1 = start;
    while(s[i] != s1 && i < len)
    {
        check = 1;
        i++;
    }
    if (i >= len)
        return (0);
    ptr = malloc(sizeof(char) * thg + 1);
    if (!ptr)
        return (0);
    int j = 0;
    while (check == 1 && i < len)
    {
        ptr[j] = s[i];
        j++;
        i++;
    }
    return ptr;
}

int main()
{
    const char *s = "hello world";
    printf("%s\n", ft_substr(s, 119, 20));
    return (0);
}