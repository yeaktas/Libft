/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:49:21 by yaktas            #+#    #+#             */
/*   Updated: 2022/02/25 15:14:29 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//girilen karakterin son gectigi yeri arar.
char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)&s[s_len]);
		s_len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	a[] = "aktastaa";

	printf("%s", ft_strrchr(a, 't'));
}*/