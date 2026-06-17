/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:03:30 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/17 20:18:23 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	if (lst == NULL)
		return (NULL);
	i = 0;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (lst);
}
