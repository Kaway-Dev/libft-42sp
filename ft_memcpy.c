#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dest_ptr;
    const unsigned char *src_ptr;
    size_t i;

    i = 0;
    dest_ptr = (unsigned char *)dest;
    src_ptr = (const unsigned char *)src;
    while (i < n)
    {
        dest_ptr[i] = src_ptr[i];
        i++;
    }
    return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char src[] = "Gabriela";
//     char dest[9];

//     ft_memcpy(dest, src, 9);
//     printf("%s\n", dest);
//     return(0);
// }