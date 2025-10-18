#include "libft.h"
/*
static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
*/
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t     i ;
    size_t src_len ;

    src_len = ft_strlen((char*)src) ;
    if (size > 0)
    {
        i = 0 ;
       while (i < size - 1 && src[i])
       {
            dst[i] = src[i] ;
            i++;
       } 
       dst[i] = '\0' ;
    }
    return src_len ;
}