/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebossue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:57:58 by jebossue          #+#    #+#             */
/*   Updated: 2016/11/09 19:31:08 by jebossue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int    i;
	
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
