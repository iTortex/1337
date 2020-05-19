/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:45:46 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 17:12:36 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int i;

	if (!lst)
		return (NULL);
	i = ft_lstsize(lst);
	while(i)
	{
		lst = lst->next;
		i--;
	}
	return(lst);
}
