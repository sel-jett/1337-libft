#include "libft.h"
int ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main (int ac, char **av)
{
	if (ac == 2)
	{
		printf("my func : %d\n", ft_isprint(*av[1]));
		printf("global  : %d\n", isprint(*av[1]));
	}
	return (0);
}
 */