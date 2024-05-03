/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-f <jrocha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:46:21 by jrocha-f          #+#    #+#             */
/*   Updated: 2024/04/22 12:20:40 by jrocha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	del(void* content)
{
	free(content);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	(del)(lst -> content);
	free(lst);
	lst = NULL;
}
/*
int	main(void)
{
	t_list	*c1;
	t_list	*c2;
	t_list	*c3;
	t_list	*head;
	t_list	*current;

	// Dinamically allocate memory for strings
	char	*s1 = ft_strdup("Hello ");
	char	*s2 = ft_strdup ("world");
	char	*s3 = ft_strdup("!!!");

	if (!s1 || !s2 || !s3)
	{
		free(s1);// Ensure all allocated memory is freed in case of failure
		free(s2);
		free(s3);
		return (1);// Exit if memory allocation fails
	}

	// Create list nodes with dinamically allocated strings
	c1 = ft_lstnew(s1);
	c2 = ft_lstnew(s2);
	c3 = ft_lstnew(s3);
	head = c1;

	// Add nodes to the list
	ft_lstadd_back(&head, c2);
	ft_lstadd_back(&head, c3);

	// Print list contents before deletion
	printf ("%s\n", "Print list before delection:");
	current = head;
	while(current != NULL)
	{
		printf("%s\n", (char *)(current -> content));
		current = current -> next;
	}

	// Del second node
	ft_lstdelone(c2, del);

	// Check the list integrity and content after deletion
	current = head;
	printf ("%s\n", "Print list after delection:");
	while(current != NULL)
	{
		printf("%s\n", (char *)(current->content));
		current = current -> next;
	}
	ft_lstdelone(c1, del);
	ft_lstdelone(c3, del);

	return (0);
}
*/