#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main (int ac, char **av)
{
	(void)ac;
	printf("My func : %d\n", ft_isalnum((int)av[1][0]));
	printf("golbal func : %d\n", isalnum((int)av[1][0]));
	return (0);
}
 */
