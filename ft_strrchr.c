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
char *ft_strrchr(const char *s, int c)
{
    int i;
    int len ;
    char *str = (char*)s ;

    len = ft_strlen(str);
    i = len - 1;
    
    while (str[i])
    {
        if (str[i] == (char)c)
            return &str[i] ;
        i--;
    }
    if (c == '\0')
        return &str[len];
    return NULL ;
}