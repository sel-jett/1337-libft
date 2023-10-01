#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char*)(s + i));
        i++;
    }
    return (0);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
    const char s[12] = "hello";
    printf("%s\n", ft_strchr(s, 108));
} */