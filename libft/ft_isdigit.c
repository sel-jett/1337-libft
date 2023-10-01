
#include "libft.h"
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main (int ac, char **av)
{
	(void)ac;
	printf("My func : %d\n", ft_isdigit((int)av[1][0]));
	printf("golbal func : %d\n", isdigit((int)av[1][0]));
	return (0);
}
 */
