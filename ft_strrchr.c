/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:46:20 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/17 18:09:06 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	const char	*last;
	size_t		i;

	ptr = s;
	last = NULL;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (char)c)
		{
			last = &ptr[i];
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&ptr[i]);
	}
	return ((char *)last);
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "banana";
//     printf("%s\n", ft_strrchr(str, 'a'));
//     return(0);
// }
