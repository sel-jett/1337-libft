#include "libft.h"

static int ft_intlen(long long n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        n *= -1;
        i++;
    }
    while(n > 0)
    {
        i++;
        n /= 10;
    }
    return (i);
}

char *ft_itoa(int n)
{
    int         size;
    char        *str;
    long long   nb;

    nb = n;
    if (nb == 0)
    {
        str = malloc(sizeof(char) * 2);
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    size = ft_intlen(nb);
    str = malloc(sizeof(char) * size + 1);
    if (!str)
        return (0);
    str[size--] = '\0';
    if(nb < 0)
    {
        nb *= -1;
        str[0] = '-';
    }
    while(nb > 0)
    {
        str[size--] = (nb % 10) + 48;
        nb /= 10;
    }
    return (str);
}

/* int main()
{
    int i = 123;
    printf("%s\n", ft_itoa(i));
    return (0);
} */