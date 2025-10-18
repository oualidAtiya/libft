#include <stdio.h>
#include "libft.h"
/*
static int ft_search(char *str , char c)
{
    int i ;

    i = 0 ;
    while (str[i])
    {
        if (str[i] == c)
            return 1 ;
        i++;
    }
    return 0;
}
*/
char *ft_strtrim(const char *s1, const char *set)
{
    int start_index ;
    int end_index ;
    size_t s1_len ;

    if (!s1|| !set)
        return NULL;
    s1_len = ft_strlen(s1);
    if (s1_len == 0)
        return (ft_strdup(""));

    start_index = 0 ;
    while (s1[start_index] && ft_strchr(set,s1[start_index]))
        start_index++;
    
    end_index = s1_len - 1;
    while (end_index >= start_index && ft_strchr(set,s1[end_index]))
        end_index--;

    return ft_substr(s1,start_index,end_index - start_index + 1);
}
/*
int main()
{
    char *str = "ab";
    printf("%s\n",ft_strtrim(str,"ab"));
}
*/