#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub_str ;
    size_t s_len ;
    size_t i ;
    
    if (!s)
        return NULL;
    s_len = ft_strlen(s);
    if (start >= s_len)
        return ft_strdup("");
    if (len > s_len - start)
        len = s_len - start ;
    sub_str = ft_calloc(len + 1, sizeof(char));
    if(!sub_str)
        return NULL ;
    i = 0 ;
    while (i < len)
    {
        sub_str[i] = s[start + i];
        i++;
    }
    sub_str[i] = '\0';
    return sub_str ;
}
/*
int main()
{
    char *sub = ft_substr("hello world", 4, 5);
    printf("%s\n",sub);
    free(sub);
    sub = NULL ;
}
*/