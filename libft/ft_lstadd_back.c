/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:51:24 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 16:43:42 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int i;
	t_list *elm;

	elm = *lst;
	i = ft_lstsize(*lst);
	while(i)
	{
		elm = elm->next;
		i--;
	}
	elm->next = new;
}
