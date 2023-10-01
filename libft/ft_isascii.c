#include "libft.h"
int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* #include <ctype.h>
#include <stdio.h>
int main (int ac, char **av)
{
	if (ac == 2)
	{
		printf("my func : %d\n",ft_isascii(av[1][0]));
		printf("global  : %d\n", isascii(av[1][0]));
	}
	return (0);
}
 */