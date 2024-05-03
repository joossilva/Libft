/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:10:10 by jrocha-f          #+#    #+#             */
/*   Updated: 2024/04/20 17:10:10 by jrocha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;
	int		len;

	if (!lst)
		return (NULL);
	current = lst;
	len = ft_lstsize(lst);
	while (--len)
	{
		current = current -> next;
	}
	return (current);
}
