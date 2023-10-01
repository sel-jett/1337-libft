#include "libft.h"
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main (int ac, char **av)
{
	(void)ac;
	printf("My func : %d\n", ft_isalpha((int)av[1][0]));
	printf("golbal func : %d\n", isalpha((int)av[1][0]));
	return (0);
}
 */