#include "libft.h"

void *ft_memset(void *s, int c, size_t size)
{
    unsigned char* ch = (unsigned char*)s;
    size_t  i;

    i = 0 ;
    while (i < size)
    {
        *ch = c ;
        ch++;
        i++;
    }
    return (s);
}