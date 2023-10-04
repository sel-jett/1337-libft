#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    int i;
    t_list *cur;
    t_list *temp;

    if (!del || !lst)
        return;
    i = ft_lstsize(*lst);
    cur = *lst;
    while (i > 0)
    {
        temp = cur->next;
        (*del)(cur->content);
        free(cur);
        cur = temp;
        i--;
    }
    *lst = NULL;
}