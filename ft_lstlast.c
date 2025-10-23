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

// int main()
// {
//     t_list *head ;
//     t_list *first;
//     t_list *second;
//     t_list *third ;

//     head = malloc(sizeof(t_list));
//     first = malloc(sizeof(t_list));
//     second = malloc(sizeof(t_list));
//     third = malloc(sizeof(t_list));
    

//     head->next = first ;
//     first->next = second;
//     second->next = third ;
//     third->content = "im the last one" ;
//     third->next = NULL ;

//     t_list *last = ft_lstlast(head);

//     printf("%s",last->content);
// }