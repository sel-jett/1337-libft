#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = -1;
	if (dest != src)
	{
		while (++i < n)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return (dest);
}

/*#include <stdio.h>
int main()
{
    char dest2[10] = "abcdefghi";
    char src2[10] = "1234567890";
    ft_memcpy(dest2, dest2+1, 5);
    printf("After memcpy: dest2=\"%s\", src2=\"%s\"\n\n", dest2, src2);

    return 0;
}*/
