/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:34:15 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/03 17:11:42 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		n--;
		i++;
		if (((unsigned char *)src)[i] == c)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			return (NULL);
		}
	}
	return (dest);
}
