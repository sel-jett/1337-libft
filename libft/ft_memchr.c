#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *s1;
    unsigned char s2;
    size_t i;

    s1 = (unsigned char *)s;
    s2 = (unsigned char)c;
    i = 0;

    while (i < n)
    {
        if(*s1 == s2)
            return s1;
        s1++;
        i++;
    }
    return (NULL);
}
/* 
#include <stdio.h>
int main()
{
    const char dest[30] = "";
    int c = 119;
    char *res = ft_memchr(dest, c, 100);
    printf("%s\n", res);
    return (0);
} */