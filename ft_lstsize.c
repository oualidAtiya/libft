#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *current ;
    int count ;
    
    count = 0 ;
    current = lst ;
    while (current)
    {
        count++;
        current = current->next ;
    }
    return count ;
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
//     third->next = NULL ;

//     printf("%d",ft_lstsize(NULL));
// }