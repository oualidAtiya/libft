#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    char *big_ptr ;
    char *little_ptr ;
    size_t i = 0;

    if(*little == '\0')
        return (char*)big ;
    while (*big && i < len)
    {
        big_ptr = (char*)big ;
        little_ptr = (char*)little;
        while (*little_ptr && *big_ptr == *little_ptr)
        {
            big_ptr++;
            little_ptr++;
        }
        if(*little_ptr == '\0')
            return (char*)big ;
        big++;
        i++;
    }
    return NULL ;
}