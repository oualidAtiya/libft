#include "libft.h"

char *ft_strdup(const char *s)
{
    int i  ;
    char *s_dup;

    if (!s)
        return (NULL);
    i = 0 ;
    while (s[i])
        i++;
    s_dup = malloc(i + 1) ;
    if (!s_dup)
        return (NULL);
    i = 0 ;
    while (s[i])
    {
        s_dup[i] = s[i] ;
        i++;
    }
    s_dup[i] = '\0';
    return (s_dup);
}