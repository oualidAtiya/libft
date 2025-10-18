#include "libft.h"
/*
static int ft_isascii(char c)
{
    if(c >= 0 && c <= 127)
        return (1);
    return (0);
}
*/
int ft_isprint(char c)
{
    if (ft_isascii(c) && (c >= 32 && c <= 126))
        return (1);
    return (0);
}