#include "libft.h" 
#include <stdio.h>

int add(int x, int y)
{
    return x + y ;
}
int main()
{
   int (*fun)(int x, int y) ;
   
   fun = add ;
   printf("%d",fun(3,5));
}