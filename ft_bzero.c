#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}

// #include <stdio.h>

// int main(void)
// {
//     char str[9] = "Gabriela";
//     ft_bzero(str + 3, 2);
//     printf("%s\n", str);
//     return(0);
// }