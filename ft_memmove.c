/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:28:15 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/06 18:50:46 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s nin adresi d den kucuk oldugunda,
//overleap sorunu olmamasi icin sondan baslanir.
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dest);
	}
	else if (s > d)
	{
		ft_memcpy(dest, src, len);
	}
	return (dest);
}

/* int	main()
{
	char d[] = "yunus";
	char s[] = "talha";

	printf("%s", ft_memmove(d+2, d, 4));
} */
