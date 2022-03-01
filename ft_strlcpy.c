/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:21:59 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/01 12:58:06 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//sourcedan destinationa n kadar kopyalar. sourceun uzunlugunu return eder.
size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	int	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < (n - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/* int	main(void)
{
	char 	a[] = "ahmet";
	char	b[] = "mehmet";

	printf("%zu", ft_strlcpy(a, b, 4));
} */
