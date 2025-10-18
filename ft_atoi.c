#include "libft.h"

static int ft_isspace(char c)
{
    if(c == ' ' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == '\t')
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int i ;
    int sign ;
    int result;

    result = 0 ;
    sign = 1 ;
    i = 0 ;
    while (str[i] && ft_isspace(str[i]))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - 48) ;
        i++;
    }  
    return result * sign ; 
}