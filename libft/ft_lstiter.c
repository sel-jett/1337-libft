#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    int i;
    t_list *cur;
    t_list *temp;

    if (!lst || !f)
        return ;
    i = ft_lstsize(lst);
    cur = lst;
    while (i > 0)
    {
        temp = cur->next;
        (*f)(cur->content);
        cur = temp;
        i--;
    }
}