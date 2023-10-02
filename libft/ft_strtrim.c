#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int len;
    char *str;
    char *ptr;

    if (!s1)
        return (0);
    ptr = (char *)s1;
    len = ft_strlen(s1) - 1;
    i = 0;
    while (set[i])
    {
        if (set[i] == *ptr)
        {
            ptr++;
            i = 0;
            len--;
        }
        else
            i++;
    }
    i = 0;
    while (set[i] && len >= 0)
    {
        if (set[i] == ptr[len])
        {
            i = 0;
            len--;
        }
        else
            i++;
    }
    str = malloc(sizeof(char) * (len + 2));
    if (!str)
        return (0);
    str[len + 1] = 0;
    i = -1;
    while (++i <= len)
        str[i] = ptr[i];
    return (str);
}

/* int main()
{
    char const *s1 = "slahjettiouisal";
    char const *s2 = "s";
    printf("%s\n", ft_strtrim(s1, s2));
    return (0);
} */