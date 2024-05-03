/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:05:26 by jrocha-f          #+#    #+#             */
/*   Updated: 2024/04/22 14:05:28 by jrocha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_node;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	current = lst;
	new_list = NULL;
	while (current != NULL)
	{
		new_node = ft_lstnew(current -> content);
		if (!new_node)
		{
			del(new_node -> content);
			ft_lstclear(&new_list, *del);
			return (new_list);
		}
		new_node -> next = NULL;
		new_node -> content = f(new_node -> content);
		ft_lstadd_back(&new_list, new_node);
		current = current -> next;
	}
	return (new_list);
}
