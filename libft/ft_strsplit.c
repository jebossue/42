/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebossue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:24:51 by jebossue          #+#    #+#             */
/*   Updated: 2016/11/15 18:52:20 by jebossue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_doit(char **array, char const *s, char c)
{
	int	i;
	int	j;
	int start;
	int len;

	i = 0;
	j = -1;
	while (s[i])
	{
		len = 0;
		while (s[i] != c && s[i])
		{
			if (i == 0 || s[i - 1] == c)
			{
				j++;
				start = i;
			}
			i++;
			len++;
		}
		if (i != 0 && s[i - 1] != c)
			array[j] = ft_strsub(s, start, len);
		if (s[i] == '\0')
			i--;
		i++;
	}
	array[j + 1] = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		nbrwords;

	nbrwords = ft_nbrwords(s, c) + 1;
	if ((array = (char**)malloc(sizeof(*array) * nbrwords)) == NULL)
		return (NULL);
	ft_doit(array, s, c);
	return (array);
}
