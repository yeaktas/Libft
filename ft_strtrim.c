/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:31:53 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/12 18:31:53 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	kontrol(char *string, char *ayirici)
{
	int	i;

	i = 0;
	while (!ayirici[i])
	{
		if (ayirici[i] == string)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*m;
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(s1);
	if (!s1)
		return (0);
	while (s1[i] && kontrol(s1[i], set))
		i++;
	while (s1[j] && kontrol(s1[j], set))
		j--;
	m = malloc(sizeof(char) * (j - i + 1));
	if (!m)
		return (0);
	while (i < j)
	{
		m[k] = s1[i];
		i++;
	}
	m[k] = '\0';
	return (m);
}

/*int	main(void)
{
	char a[] = "yunuseumrue";
	printf("%s", ft_strtrim(a, "y"));
}*/
