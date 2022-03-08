/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktas <aktas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:43:10 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/03 22:32:47 by aktas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//alfabetik karakterse 1 degilse 0 ceviriyor.
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("%d", ft_isalpha(c));
	return (0);
}*/
