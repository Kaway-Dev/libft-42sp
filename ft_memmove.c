/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 17:56:56 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/15 20:38:12 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	const unsigned char	*src_ptr;
	size_t	i;

	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dest_ptr > src_ptr)
	{
		while (n > 0)
		{
			n--;
			dest_ptr[n] = src_ptr[n];
		}
	}
	else
	{
		while (i < n)
 		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// char str[] = "abcdef";
// ft_memmove(str + 2, str, 4);
// printf("%s\n", str);
// }
