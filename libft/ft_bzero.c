#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = -1;
	str = s;
	while (++i < n)
		str[i] = 0;
}
/* 
#include <strings.h>
int main() {
    char buffer[10];


    ft_bzero(buffer, sizeof(buffer));

    printf("Buffer: %s\n", buffer);

    return 0;
} */

