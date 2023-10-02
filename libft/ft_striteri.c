#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int len;
    unsigned int i;

    if (!s)
        return ;
    len = strlen(s);
    i = -1;
    while (++i < len)
        (*f)(i, &s[i]);
}