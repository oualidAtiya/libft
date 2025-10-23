#include "libft.h"

struct node 
{
    int data ;
    struct node *link ;
};

int main()
{
    struct node *head ;

    head = malloc(sizeof(struct node));
    head->data = 0 ;
    struct node *first = malloc(sizeof(struct node));
    head->link = first ;
    first->data = 45 ;
    struct node *second = malloc(sizeof(struct node));
    first->link = second;
    second->data = 98 ;
    struct node *third = malloc(sizeof(struct node));
    second->link = third ;
    third->data = 100 ;
    third->link = NULL ;

    struct node *node_link ;
    node_link = head->link;
    while (node_link != NULL)
    {
        printf("%d\n" , node_link->data);
        node_link = node_link->link ;
    }
    free(head);
    free(first);
    free(second);
    free(third);
}