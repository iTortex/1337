/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 17:15:36 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 17:51:59 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *elm;
	int i;

	elm = *lst;
	i = ft_lstsize(*lst);
	while(i)
	{
		(*del)(elm->content);
		free(elm);
		elm = elm->next;
	}
	elm->next = NULL;
}
