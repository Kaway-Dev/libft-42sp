/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:45:49 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/17 18:11:30 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dst_len)
		return (size + src_len);

	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}

	dst[dst_len + i] = '\0';

	return (dst_len + src_len);
}

// #include <stdio.h>

// int main(void)
// {
//     char dst[20] = "Oi ";
//     char src[] = "Philippe";

//     printf("%lu\n", (unsigned long)ft_strlcat(dst, src, 20));
//     printf("%s\n", dst);
//     return(0);
// }
