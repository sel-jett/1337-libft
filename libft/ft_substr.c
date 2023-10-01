#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t size;
    char *str;

    size = ft_strlen(s);
    i = 0;
    if (!s)
        return (0);
    if (start > size)
    {
        str = ft_calloc(1, 1);
        return (str);
    }
    if (len > size)
        len = size - start;
    str = malloc(sizeof(char) * len + 1);
    if (!str)
        return (0);
    int futstart = start;
    while (s[futstart] && i < len && start < size)
    {
        str[i] = s[futstart];
        i++;
        futstart++;
    }
    str[i] = '\0';
    return str;
}

/* int main()
{
    const char *s = "hello world";
    printf("%s\n", ft_substr(s, 7, 20));
    return (0);
} */