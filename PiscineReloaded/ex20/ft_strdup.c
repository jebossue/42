/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebossue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:39:11 by jebossue          #+#    #+#             */
/*   Updated: 2016/11/04 20:14:04 by jebossue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*copy;
	int		length;
	int		i;

	length = 0;
	while (src[length])
		length++;
	copy = malloc(sizeof(char) * length);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	return(copy);
}
