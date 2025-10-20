#include <stdio.h>
#include "libft.h"

int word_count(const char *str, char c)
{
    int i ;
    int count;

    i = 0 ;
    count = 0 ;
    while (str[i])
    {
        while(str[i] && str[i] == c)
            i++;
        if(str[i])
        {
            count++;
            while(str[i] && str[i] != c)
                i++;
        }
    }
    return count;
}

void ft_free(char** array , int index)
{
    while (index > 0)
        free(array[--index]);
    free(array);
}

char **ft_split(const char *s, char c)
{
    char **array ;
    int i ;
    int j ;
    int k ;
    int word_len ;

    if(!s)
        return NULL ;
    array = ft_calloc(word_count(s,c) + 1 , sizeof(char *));
    if (!array)
        return NULL ;
    j = 0 ;
    i = 0 ;
    while (s[i])
    {
        while(s[i] && s[i] == c)
            i++;
        if (s[i])
        {
            word_len = 0 ;
            while (s[i] && s[i] != c)
            {
                word_len++;
                i++;
            }
            i = i - word_len ;
            array[j] = malloc(word_len + 1) ;
            if (!array[j])
                ft_free(array,j);
            k = 0 ;
            while(s[i] && s[i] != c)
                array[j][k++] = s[i++] ;
            array[j][k] = '\0';
            j++;     
        }
    }
    array[j] = NULL ;
    return array ;
}

int main()
{
    int i = 0;
    char **words = ft_split(",oualid,atiya,oualid,atiya,        oualid,", ',');
    while (words[i])
    {
        printf("%s\n",words[i]);
        i++;
    }
}
