/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:18:06 by yaktas            #+#    #+#             */
/*   Updated: 2022/03/14 12:18:06 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	str_in_array(const char *s, char d)
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		if (*s == d)
			s++;
		else
		{
			while (*s != d && *s)
				s++;
			i++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			**m;
	unsigned int	j;
	unsigned int	a;

	if (!s)
		return (NULL);
	m = (char **) ft_calloc(str_in_array(s, c) + 1, sizeof(char *));
	if (!m)
		return (NULL);
	a = -1;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (*s != c && *s && ++j)
				s++;
			m[++a] = (char *) ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(m[a], s - j, j + 1);
		}
	}
	return (m);
}

/* int	main(void)
{
	    char **a;
        a = ft_split("marhaba.selamlar.oye", '.');
        printf("%s\n",a[0]);
        printf("%s\n",a[1]);
        printf("%s",a[2]);
} */
