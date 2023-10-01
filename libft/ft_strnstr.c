#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    /*needle is the maximum number of characters to search within the haystack string. It limits the search to the first len characters of haystack*/
    size_t i;
    size_t k;
    int j;

    i = 0;
    if (needle[0] == '\0' || haystack == needle)
        return (char *)haystack;
    while (haystack[i] && i < len)
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            k = i;
            while (haystack[k] && needle[j] && haystack[k] == needle[j])
            {
                if (k >= len)
                    return NULL;
                j++;
                k++;
            }
            if (needle[j] == '\0')
                return (char *)&haystack[i];
        }
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