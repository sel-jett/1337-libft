#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*(char *)s == (char)c)
            return ((char *)s);
        s++;
    }
    if (!(char)c)
        return ((char *)s);
    return (0);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
    const char s[12] = "hello";
    printf("%s\n", ft_strchr(s, 108));
} */