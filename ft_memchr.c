/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:32:42 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/06 16:28:06 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//snin icinde n kadar c arar. buldugunda bellek adresini geri dondurur.
void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (n--)
	{
		if (str[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	a[] = "ahmet";

	printf("%p", ft_memchr(a, 'm', 3));
} */
