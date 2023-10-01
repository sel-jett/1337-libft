#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i] && i < dstsize)
        i++;
    while (src[j] && (j + i + 1) < dstsize)
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i < dstsize)
        dst[i + j] = '\0';
    return (i + ft_strlen(src));
}

/*#include <string.h>
int main()
{
    char destination[20] = "Hello";
    const char *source = "world!";

    printf("Original destination: %s\n", destination);
    printf("Source: %s\n", source);

    size_t result = ft_strlcat(destination, source, 4);
    printf("Size of %ld \n", sizeof(destination));

    printf("Concatenated result: %s\n", destination);
    printf("Total length after concatenation: %zu\n", result);

    return 0;
}*/
