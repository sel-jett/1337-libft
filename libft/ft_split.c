#include "libft.h"

static int count_words(char const *str, char c)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            i++;
            continue;
        }
        count++;
        while (str[i] && str[i] != c)
            i++;
    }
    return (count);
}

static char **fill_words(char **str, char const *s, char c)
{
    int i;
    int str_i;
    int minus;

    i = 0;
    str_i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            i++;
            continue;
        }
        minus = i;
        while (s[i] && s[i] != c)
            i++;
        str[str_i] = malloc(i - minus + 1);
        if (!str[str_i])
            return (0);
        ft_strlcpy(str[str_i++], s + minus, i - minus + 1);
    }
    str[str_i] = NULL;
    return (str);
}

static void free_str(char **str)
{
    int i;

    i = 0;
    while (str[i])
        free(str[i++]);
    free(str);
}

char **ft_split(char const *s, char c)
{
    int words;
    char **str;

    if (!s)
        return (0);
    words = count_words(s, c);
    str = malloc(sizeof(char *) * (words + 1));
    if (!str)
        return (0);
    if (!fill_words(str, s, c))
    {
        free_str(str);
        return (0);
    }
    return (str);
}

/* int main()
{
    char const *str = "     salah  jettioui ";
    char **ptr = ft_split(str, ' ');
    for (int i = 0; i < 2; i++)
        printf("%s\n", ptr[i]);
    return (0);
} */