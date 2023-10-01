#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;

	if (!dest && !src)
		return (0);
	if (d > s && d < s + n)
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	else
	{
		while (n--)
		{
			*(d++) = *(s++);
		}
	}
	return (dest);
}

/* 
#include <string.h>
int main()
{
	char dest[30] = "" ;
	char src[20] = "Hello world";
	memmove(dest, src, 20);
	printf("Dest : %s\n", dest);
	printf("SRC : %s\n",src);
	return (0);
}
 */