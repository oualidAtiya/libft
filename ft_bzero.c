#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char*  ch ;

    ch = (unsigned char*)s ;
    i = 0 ;
    while (i < n)
    {
        *ch = 0;
        ch++;
        i++;
    }
}