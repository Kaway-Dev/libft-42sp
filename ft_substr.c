#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  s_len; // string ori
    size_t  sub_len; // quanto vou copiar/alocar
    char    *sub; // nova string que eu retorno

    s_len = ft_strlen(s);
    if(start >= s_len)
        return ft_strdup("");

    if(len > s_len - start)
        sub_len = s_len - start;
    else 
        sub_len = len;

    sub = malloc(sub_len + 1);
    if(sub == NULL)
        return NULL;

    ft_strlcpy(sub, s + start, sub_len + 1);
    return sub;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     char *sub;

//     sub = ft_substr("Philippe", 3, 4);
//     if (sub == NULL)
//         return (1);
//     printf("%s\n", sub);
//     free(sub);
//     return(0);
// }