#include "libft.h"
#include <stdio.h>

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t total_len ;
    char* s3 ;

    if (!s1 || !s2)
        return NULL ;
    total_len = ft_strlen(s1) + ft_strlen(s2);
    s3 = ft_calloc(total_len + 1,sizeof(char));
    if(!s3)
        return NULL ;
    ft_strlcpy(s3,s1,total_len + 1);
    ft_strlcat(s3,s2, total_len + 1);
    return (s3) ;
}

int main()
{
    char *s = ft_strjoin(NULL,"hhhhhhh");
    printf("%p\n",s);
}