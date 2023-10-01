#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dlen;
    size_t slen;
    size_t i;

    i = 0;
    slen = ft_strlen(src);
    if (!dst && !dstsize)
        return (slen);
    dlen = ft_strlen(dst);
    slen += dlen * (dlen < dstsize) + dstsize * !(dlen < dstsize);
    while(src[i] && (dlen + i + 1) < dstsize)
    {
        dst[dlen + i] = ((char *)src)[i];
        i++;
    }
    dst[dlen + i] = '\0';
    return (slen);

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
