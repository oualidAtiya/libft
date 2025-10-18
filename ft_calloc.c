#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char* tmp ;
    size_t i ;
    size_t total ;

    if (count != 0 && size  > (size_t)-1 / count) 
        return (NULL);

    total = size * count ;
    tmp  = malloc(total) ;
    if (!tmp)
        return(NULL);
    i = 0 ;
    while (i < total)
    {
        tmp[i] = 0 ;
        i++;
    }
    return (tmp);
}