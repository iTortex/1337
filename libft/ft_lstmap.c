/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 17:26:45 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/20 16:54:20 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *dellst;

	dellst = lst;
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		newlst = ft_lstnew((*f)(dellst->content));
		dellst = lst->next;
		ft_lstdelone(lst, del);
	}
	return (newlst);
}
