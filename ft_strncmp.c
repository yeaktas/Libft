/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktas <aktas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:32:12 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/03 22:34:02 by aktas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//iki stringi karsilastirir fark gordugunde char farkini return eder.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char a[] = "erdem";
	char b[] = "eryunus";

	printf("%d", ft_strncmp(a, b, 5));
} */