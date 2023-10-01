#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = -1;
    if (size)
    {
        while ((++i) + 1 < size && src[i])
            dst[i] = src[i];
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}

/* int main ()
{
    char    dest[20];
    char    src[20] = "Hello World";
    printf("num : %ld\n", strlcpy(dest, src, 20));
    printf("%s\n", dest);
    return (0);
} */