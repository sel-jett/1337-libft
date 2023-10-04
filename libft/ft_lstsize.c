#include "libft.h"

int ft_lstsize(t_list *lst)
{
    size_t  len;

    if (!lst)
        return (0);
    len = 0;
    while(lst)
    {
        len++;
        lst = lst->next;
    }
    return len;
}