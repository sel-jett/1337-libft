#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *tab;

    tab = malloc(nmemb * size);
    if(!tab)
        return (0);
    ft_bzero(tab, (nmemb * size));
    return tab;
}

/* #include <stdio.h>
int main()
{
    int *tab = ft_calloc(4, sizeof(int));
    tab[0] = 1;
    printf("%d\n", tab[0]);
    return(0);
} */