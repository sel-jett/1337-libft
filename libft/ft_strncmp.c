#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (*(unsigned char *)s1 && *(unsigned char *)s1 == *(unsigned char *)s2 && i < n)
    {
        s1++;
        s2++;
        i++;
    }
    if (i == n)
        return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* #include <string.h>
int main ()
{
    char s1[10] = "kelho";
    char s2[10] = "hello";
    printf("%d\n", ft_strncmp(s1, s2, 0));
    printf("%d\n", strncmp(s1, s2, 0));
    return (0);
} */