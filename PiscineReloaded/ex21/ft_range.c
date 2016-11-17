/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebossue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:53:34 by jebossue          #+#    #+#             */
/*   Updated: 2016/11/03 12:59:00 by jebossue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return(tab);
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return(tab);
}
