// #include "libft.h"
// #include <ctype.h>

// void del(void *content)
// {
//     return ;
// }

// void *f(void *content)
// {
//     content = "content changed";
//     return content ;
// }
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     // isalpha test
//     // char c = '1' ;
//     // printf("Original : %d\n",isalpha(c));
//     // printf("My : %d\n",ft_isalpha(c));

//     // //////////////////////////////////////////////////////////////////////

//     // memset test
//     // int n = 0 ;
//     // unsigned char* ch = (unsigned char*)&n ;
//     //memset(ch,-1337,1);
//     // ft_memset(ch,-1337,1);
//     // printf("%d\n",n);

//     // //////////////////////////////////////////////////////////////////////

//     // bzero test
//     // int n = 1337 ;
//     // unsigned char* ch = (unsigned char*)&n ;
//     // ft_bzero(ch,4);11 allocs, 21 free
//     // printf("%d\n",n);

//     // //////////////////////////////////////////////////////////////////////

//     // memcpy test
//     // char *src = "hello" ;
//     // char dest[20] ;
//     // ft_memcpy(src,src,6);
//     // // memcpy(src,src,6);
//     // printf("%s\n",dest);

//     // //////////////////////////////////////////////////////////////////////

//     // memmove test
//     // char src[50] = "hello" ;
//     // char dest[30];
//     // memmove(src+1,src,6);
//     //printf("Original : %s\n",memmove(src+2,src,3)) ;
//     //printf("My : %s\n",ft_memmove(src+2,src,3)) ;

//     // //////////////////////////////////////////////////////////////////////

//     // test strlcpy
//     // char *src = "hello" ;11 allocs, 21 free
//     // char dest[20];
//     // ft_strlcpy(dest,src,20);
//     // printf("%s\n",dest);

//     ////////////////////////////////////////////////////////////////////////

//     // test strchr
//     // const char* str = "hello world" ;
//     // if (strchr(str,'d') == NULL)
//     //     printf("return NULL\n");
//     // else 
//     //     printf("%s\n",strchr(str,'d'));

//     // /////////////////////////////////////////////////////////////////////

//     // test strrchr21 
//     // const char* str = "hello world" ;
//     // if (ft_strrchr(str,'l') == NULL)
//     //     printf("return NULL\n");
//     // else 
//     //     printf("%s\n",ft_strrchr(str,'l'));

//     // /////////////////////////////////////////////////////////////////////

//     // test memchr
//     // char *str = "hello" ;
//     // printf("%s\n",ft_memchr(str,'l',5));

//     // /////////////////////////////////////////////////////////////////////
//     // /////////////////////////////////////////////////////////////////////

//     // bonus part
//     // t_list *head ;

//     // head = ft_lstnew(ft_strdup("node1")) ;
//     // ft_lstadd_back(&head,ft_lstnew(ft_strdup("node1")));
//     // ft_lstadd_back(&head,ft_lstnew(ft_strdup("node2")));
//     // ft_lstadd_back(&head,ft_lstnew(ft_strdup("node3")));
//     // ft_lstadd_back(&head,ft_lstnew(ft_strdup("node4")));

//     // t_list *current ;
//     // current = head ;
//     // while (current)
//     // {
//     //     printf("%s\n",(char*)current->content);
//     //     current = current->next ;
//     // }

//     // ft_lstclear(&head,del);

//     // char *a = "222222222222222222222222222222222223";
//     // printf("ft_atoi: %d\natoi:    %d\n", ft_atoi(a), atoi(a));

//     // test ft_lstmap
//     // t_list *head = ft_lstnew("node1") ;


//     // ft_lstadd_back(&head,ft_lstnew("node1"));
//     // ft_lstadd_back(&head,ft_lstnew("node2"));
//     // ft_lstadd_back(&head,ft_lstnew("node3"));
//     // ft_lstadd_back(&head,ft_lstnew("node4"));

    

//     // t_list *new_head = ft_lstmap(head,f,del);
//     // t_list *current ;
//     // current = new_head;
//     // while (current)
//     // {
//     //     printf("%s\n",current->content);
//     //     current = current->next ;
//     // }
//     // ft_lstclear(&new_head,del);
//     // ft_lstclear(&head,del);

//     // printf("%d\n",ft_atoi("-9223372036854775809"));
//     // printf("%d\n",atoi("-9223372036854775809"));
// }