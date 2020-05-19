/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 17:26:45 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 17:52:47 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst)
		return (NULL);
	while(lst->next != NULL)
	{
		if ((*f)(lst->content))
		{
			ft_lstnew((*f)(lst->content));
			lst = lst->next;
		}
		if(!(*f)(lst->content) && lst->next != NULL)
		{
			(*del)(lst->content);
			free(lst);
			return (NULL);
		}
	}
	return (lst);
}
