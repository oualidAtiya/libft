#include "libft.h"

void *ft_memove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char* src_ptr ;
    unsigned char* dest_ptr ;

    dest_ptr = (unsigned char*)dest ;
    src_ptr = (unsigned char*)src ;
    i = 0 ;
    if (src > dest)
    {
        while (i < n)
        {
            dest_ptr[i] = src_ptr[i] ;
            i++;
        }
    }
    else if (dest > src)
    {
        while (n > 0)
        {
            dest_ptr[n - 1] = src_ptr[n - 1];
            n--;
        }
    }
    return(dest);
}