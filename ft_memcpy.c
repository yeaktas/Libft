/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:08:50 by aktas             #+#    #+#             */
/*   Updated: 2022/03/04 12:24:49 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//srcden deste n kadar kopyalar.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srce;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	srce = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dst);
}

/* int main()
{
	char	a[] = "yunushyhyhs";
	char	b[] = "emreaktas";

	printf("%s", ft_memcpy(a, b, 3));

}
 */