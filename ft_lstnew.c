#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *list ;

    list = malloc(sizeof(t_list));
    if(!list)
        return NULL ;
    list->content = content ;
    list->next  = NULL ;
    return list ;
}

// int main()
// {
//     t_list *list = ft_lstnew("hello");
//     printf("%s\n",list->content);
//     free(list);
// }