/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 08:58:42 by jrocha-f          #+#    #+#             */
/*   Updated: 2024/04/15 08:58:42 by jrocha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char	c;
	char	a;

	c = 'd';
	a = ft_toupper(c);

	printf("%c\n", ft_toupper(c));
	return(0);
}
*/