/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:45:17 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/17 17:43:02 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	total = nmemb * size;
	if (!(nmemb == 0) && total / nmemb != size)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	ft_bzero(ptr, total);
	return (ptr);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(void)
// {
//     int *nums;
//     int i;

//     nums = ft_calloc(4, sizeof(4294967296));
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
