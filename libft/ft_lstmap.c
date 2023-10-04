#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_node;
    t_list *new_list;
    t_list *cur;

    if (!lst || !f || !del)
        return (0);
    cur = lst;
    new_list = 0;
    new_node = 0;
    while (cur)
    {
        new_node = ft_lstnew(f(cur->content));
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return (0);
        }
        else
            ft_lstadd_back(&new_list, new_node);
        cur = cur->next;
    }
    return (new_list);
}