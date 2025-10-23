#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst ;
    *lst = new ;

}

int main()
{
    t_list *head ;
    t_list *first;
    t_list *second;
    t_list *new ;
    t_list *last ;

    head = malloc(sizeof(t_list));
    first = malloc(sizeof(t_list));
    second = malloc(sizeof(t_list));
    new = malloc(sizeof(t_list));
    last = malloc(sizeof(t_list));

    new->content = "hello im The New One";

    head->next = first ;
    head->content = "hello im the old head";
    first->next = second;
    second->next = NULL ;

    ft_lstadd_front(&head,new) ;

    printf("%s\n",head->content);
}