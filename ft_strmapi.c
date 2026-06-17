#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *result;
    size_t len;

    if(!s || !f)
        return NULL;

    len = ft_strlen(s);
    result = malloc(len + 1);
    if(result == NULL)
        return NULL;

    i = 0;
    while(s[i] != '\0')
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return result;
}