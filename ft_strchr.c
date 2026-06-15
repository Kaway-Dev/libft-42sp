/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:45:35 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/15 20:45:05 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;
	size_t	i;

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
