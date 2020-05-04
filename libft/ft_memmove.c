/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:47:54 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/02 00:58:29 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	char *d;

	i = 0;
	d = ((unsigned char *)src);
	while (n != 0)
	{
		((unsigned char *)dest)[i] = d[i];
		i++;
		n--;
	}
	return (dest);
}