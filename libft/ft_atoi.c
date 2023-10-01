#include "libft.h"
int ft_atoi(const char *nptr)
{
    int i;
    int num;
    int signe;

    i = 0;
    num = 0;
    signe = 1;
    while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            signe = -1;
        i++;
    }
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        num = num * 10 + (nptr[i] - 48);
        i++;
    }
    return (num * signe);
}

/* int main()
{
    char *ptr = "   12a23";
    printf("My func : %d\n", ft_atoi(ptr));
    printf("std func : %d\n", atoi(ptr));
    return (0);
} */