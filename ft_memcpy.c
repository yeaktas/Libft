/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktas <aktas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:08:50 by aktas             #+#    #+#             */
/*   Updated: 2022/03/03 22:29:58 by aktas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
gey yunus
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*src2;
	size_t	i;

	i = 0;
	str = (char *)dst;
	src2 = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = src2[i];
		i++;
	}
	return (dst);
}

int main()
{
	char	a[] = "yundfgdfgdfgus";
	char	b[] = "erdfgdfgrr";

	printf("%s", ft_memcpy(a, b, 5));

}