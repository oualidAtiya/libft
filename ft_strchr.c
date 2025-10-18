#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char *str = (char*)s ;
    i = 0 ;
    
    while (str[i])
    {
        if (str[i] == (char)c)
            return &str[i] ;
        i++;
    }
    if ( (char)c == '\0')
        return &str[i] ;
    return 0 ;
}