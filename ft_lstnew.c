/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:47:45 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/17 18:30:48 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>
// #include <stdlib.h>

// // int	main(void)
// // {
// // 	t_list	*node;
// // 	char	*text;

// // 	text = "Philippe";
// // 	node = ft_lstnew(text);
// // 	if (node == NULL)
// // 		return (1);
// // 	printf("content: %s\n", (char *)node->content);
// // 	if (node->next == NULL)
// // 		printf("next: NULL\n");
// // 	free(node);
// // 	return (0);
// // }
