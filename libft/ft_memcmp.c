#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    while (n && *(unsigned char *)s1 == *(unsigned char *)s2)
    {
        n--;
        s1++;
        s2++;
    }
    if (!n)
        return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* s
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