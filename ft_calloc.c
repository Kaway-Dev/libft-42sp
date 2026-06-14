#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    size_t total;
    void *ptr;

    total = nmemb * size;

    ptr = malloc(total);
    if(ptr == NULL)
        return NULL;

    ft_bzero(ptr, total);
    return ptr;
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(void)
// {
//     int *nums;
//     int i;

//     nums = ft_calloc(4, sizeof(int));
//     if(nums == NULL)
//         return (1);

//     i = 0;
//     while(i < 4)
//     {
//         printf("%d\n", nums[i]);
//         i++;
//     }
//     free(nums);
//     return(0);
// }