#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *ptr;

    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    ptr = *lst;
    while (ptr->next)
        ptr = ptr->next;
    ptr->next = new;
}
