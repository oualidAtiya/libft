#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char* s1_start ;
    unsigned char* s2_start ;
    size_t i ;

    if(!s1 || !s2)
        return 0 ;
    s1_start = (unsigned char*)s1 ;
    s2_start = (unsigned char*)s2 ;
    i = 0 ;
    while (i < n)
    {
        if(*s1_start != *s2_start)
            return (*s1_start - *s2_start) ;
        s1_start++;
        s2_start++; 
        i++;
    }
    return 0 ;
}