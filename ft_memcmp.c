#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *ptr1;
    const unsigned char *ptr2;
    size_t i;

    ptr1 = (const unsigned char *)s1;
    ptr2 = (const unsigned char *)s2;

    i = 0;
    while(i < n)
    {
        if (ptr1[i] != ptr2[i])
        {
            return (ptr1[i] - ptr2[i]);
        }
        i++;
    }
    return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     char str1[] = "abc";
//     char str2[] = "abcy";
//     printf("%d\n", ft_memcmp(str1, str2, 4));
//     return(0);
// }