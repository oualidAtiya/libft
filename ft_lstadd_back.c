#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last ;

    if(*lst == NULL)
    {
        *lst = new ;
        return ;
    }
    last = ft_lstlast(*lst);
    last->next = new ;
}

int main()
{
    t_list *head = ft_lstnew("head text");
    t_list *n2 = ft_lstnew("text2");
    t_list *n3 = ft_lstnew("text3");
    t_list *n4 = ft_lstnew("text4");

    t_list *new = ft_lstnew("im the new one");

    head->next = n2 ;
    n2->next = n3;
    n3 ->next = n4 ;

    head = NULL ;
    ft_lstadd_back(&head,new);

    t_list *last = ft_lstlast(head) ;
    printf("%s\n",last->content);
}