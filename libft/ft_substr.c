#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t size;
    char *str;
    const char *ptr;

    if (!s)
        return (0);
    size = ft_strlen(s);
    i = 0;
    if (start > size)
    {
        str = ft_calloc(1, 1);
        if (!str)
            return (0);
        return (str);
    }
    if (len > (size - start))
        len = size - start;
    ptr = &s[start];
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (0);
    while (i < len && start < size)
    {
        str[i] = ptr[i];
        i++;
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