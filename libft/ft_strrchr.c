#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)(s + i));
        i--;
    }
    return (0);
}

/* 
#include <stdio.h>
int main()
{
    const char s[12] = "holol";
    printf("%s\n", ft_strrchr(s, 104));
} */