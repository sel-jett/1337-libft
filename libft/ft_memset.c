#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = -1;
	while (++i < n)
		str[i] = c;
	return (s);
}
/* z
#include <string.h>
int main() {

    int myArray[5];
    ft_memset(myArray, 1, sizeof(myArray));
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myArray[i]);
    }

    return 0;
}
 */