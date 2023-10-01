#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *haystack;
    unsigned char *needle;

    i = 0;
    haystack = (unsigned char *)s1;
    needle = (unsigned char *)s2;

    if ((!haystack && !needle) || n == 0)
        return (0);
    while (*haystack && *haystack == *needle && i < n)
    {
        haystack++;
        needle++;
        i++;
    }
    return (int)(*haystack - *needle);
}


/* 
#include <string.h>
int main()
{
    char dest[30] = "Hello";
    char src[20] = "Hello";
    int res = ft_memcmp(dest, src, 0);
    printf("%d\n", res);
    printf("Dest : %s\n", dest);
    printf("SRC : %s\n", src);
    res = memcmp(dest, src, 20);
    printf("%d\n", res);
    printf("Dest : %s\n", dest);
    printf("SRC : %s\n", src);
    return (0);
} */