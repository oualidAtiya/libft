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
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  src_len ;
    size_t dst_len ;
    size_t i ;
    
    i = 0 ;
    dst_len = ft_strlen((char *)dst);
    src_len = ft_strlen((char *)src);
    if (dst_len >= size)
        return size + src_len ;
    
    if(size > 0)
    {
        while (i < size - dst_len - 1 && src[i])
        {
            dst[dst_len + i] = src[i]; 
            i++;
        }
        dst[dst_len + i] = '\0' ;
    }
    return (dst_len + src_len);
}