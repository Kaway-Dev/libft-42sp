#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if(*little == '\0')
        return ((char *)big);
    i = 0;
    while(big[i] && i < len)
    {
        j = 0;
        while((i + j) < len && little[j] != '\0' && big[i + j] == little[j])
            j++;
        if(little[j] == '\0')
            return ((char *)&big[i]);
        i++;
    }
    return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%s\n", ft_strnstr("Gabriela", "bri", 3));
// }