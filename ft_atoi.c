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
    unsigned long result;

    result = 0 ;
    sign = 1 ;
    i = 0 ;
    while (str[i] && ft_isspace(str[i]))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0') ;
        
        if (sign == 1 && result > LONG_MAX)
            return (-1);

        if (sign == -1 && result > (unsigned long)LONG_MAX + 1)
            return (0);
        i++;
    }  
    return (int)(result * sign);
}