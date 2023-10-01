#include "libft.h"
int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    return (c);
}
/* #include <stdio.h>
int main()
{
    printf("%c\n", ft_toupper('z'));
    return (0);
} */