#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    /*needle is the maximum number of characters to search within the haystack string. It limits the search to the first len characters of haystack*/
    size_t i;
    size_t j;

    i = 0;
    if (haystack == 0 && len == 0)
        return (0);
    if (!*needle)
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
            j++;
        if (!needle[j])
            return (char *)&haystack[i];
    i++;
    }
    return (0);
}

/* int main()
{
    const char *str = "Foo Bar Baz";
    const char *needle = "Bar";
    printf("%s\n", ft_strnstr(str, needle, 8));
    return (0);
} */