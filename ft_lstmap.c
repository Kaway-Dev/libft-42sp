/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkaway- <phkaway-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:04:59 by phkaway-          #+#    #+#             */
/*   Updated: 2026/06/20 11:51:45 by phkaway-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*ft_clear(t_list **lst, void (*del)(void *), void *content)
{
	if (content)
		del(content);
	ft_lstclear(lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new;
	t_list	*tail;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_head = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_clear(&new_head, del, content));
		new = ft_lstnew(content);
		if (!new)
			return (ft_clear(&new_head, del, content));
		if (!new_head)
			new_head = new;
		else
			tail->next = new;
		tail = new;
		lst = lst->next;
	}
	return (new_head);
}
