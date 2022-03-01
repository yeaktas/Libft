/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:53:58 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/02 01:46:00 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//deste srcyi ekler, return olarak, dest ve src uzunlugu toplanır dondurulur.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (dlen < size - 1 && size > 0)
	{
		while (src[i] != '\0' && dlen + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dlen >= size)
		dlen = size;
	return (dlen + slen);
}
/* int	main(void)
{
	char a[] = "yunus";
	char b[] = "emre";

	printf("%zu", ft_strlcat(a, b, 8));
} */