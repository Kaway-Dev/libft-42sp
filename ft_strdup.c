/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:45:40 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/17 18:29:09 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s, len + 1);
	return (copy);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*copy;

// 	copy = ft_strdup("Philippe");
// 	if (copy == NULL)
// 		return (1);
// 	printf("%s\n", copy);
// 	free(copy);
// 	return (0);
// }
