/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebossue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:27:54 by jebossue          #+#    #+#             */
/*   Updated: 2016/11/17 18:39:08 by jebossue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	tmp;
	t_list	ptmp;

	tmp = *alst;
	ptmp = *alst;
	while (tmp->next != NULL)
	{
		ptmp = tmp;
		(*del)(tmp->content, tmp->content_size);
		tmp = tmp->next;
	}
	ptmp->next = NULL;
	free(tmp);
}
