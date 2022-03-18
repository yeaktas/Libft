/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:12:36 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/18 12:12:36 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//snin icinde n kadar c arar. buldugunda bellek adresini geri dondurur.
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	if (c == '\0')
		return ((void *)s + i);
	return (NULL);
}

/* int	main(void)
{
	char	a[] = "ahmet";

	printf("%p", ft_memchr(a, 'm', 3));
} */
