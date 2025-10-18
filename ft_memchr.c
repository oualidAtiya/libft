#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char byte ;
    unsigned char* start;
    size_t i;

    i = 0;
    byte = (unsigned char)c;
    start = (unsigned char*)s;
    while (i < n)
    {
        if (start[i] == byte)
            return &start[i] ;
        i++;
    }
    return NULL ;
}