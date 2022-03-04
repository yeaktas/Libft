/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:40:11 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/04 18:33:04 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//bellekte belirlenen iki stringi n kadar karsilastirir.
//fark varsa farki dondurur.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	if (n == 0)
		return (0);
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
	i++;
	}
	return (us1[i] - us2[i]);
}

/* int	main()
{
	char a[] = "bilgisayar";
	char b[] = "bilgiler";
	printf("%d\n", ft_memcmp(a, b, 3));
} */