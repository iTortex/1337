/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:51:24 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 21:21:46 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *elm;

	if (*lst)
	{
		elm = *lst;
		while(elm->next)
			elm = elm->next;
		elm->next = new;
	}
	else
		*lst = new;
}
