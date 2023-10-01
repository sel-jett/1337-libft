#include "libft.h"

size_t ft_strlen(const char *s)
{
	int i;
       
	i = 0;
	while(s[i])
		i++;
	return (i);
}

/* #include <string.h>
int main (int ac, char **av)
{
	if (ac == 2)
	{
		printf("my func : %zu\n", ft_strlen(av[1]));
		printf("global  : %zu\n", strlen(av[1]));
	}
	return (0);
}
 */