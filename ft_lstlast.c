#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
   t_list *current ;
   
   current = lst ;
   while (current)
   {
        if (!current->next)
            return current ;
        current = current->next ;
   }
   return NULL ;
}
