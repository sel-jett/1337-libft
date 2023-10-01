#include "libft.h"
char *ft_strdup(const char *s)
{
    size_t  i;
    size_t  len;
    char    *str;

    i = 0;
    len = ft_strlen(s);
    str = malloc(sizeof(char) * len + 1);
    if(!str)
        return(0);
    while(i < len)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return str;
}
/* 
#include <stdio.h>
int main()
{
    char *str = "salah";
    printf("%s\n",ft_strdup(str));
    return(0);
}

 */