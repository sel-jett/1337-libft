#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int len;
    unsigned int i;
    char *str;

    if (!s)
        return (0);
    len = strlen(s);
    str = malloc(sizeof(char) * len + 1);
    if (!str)
        return (0);
    i = -1;
    while (++i < len)
        str[i] = (*f)(i, s[i]);
    str[i] = '\0';
    return (str);
}