#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    const char *ptr;
    size_t i;

    ptr = s;
    i = 0;
    while(ptr[i] != '\0')
    {
        if (ptr[i] == (char)c)
        {
            return ((char *)&ptr[i]);
        }
        i++;
    }
    if ((char)c == '\0')
    {
        return ((char *)&ptr[i]);
    }
    return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     char str[] = "Gabriela";
//     printf("%s\n", ft_strchr(str, 'a'));
//     return(0);
// }