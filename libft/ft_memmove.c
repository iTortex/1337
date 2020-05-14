/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:47:54 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/13 20:48:10 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *mem1;
	const unsigned char *mem2;

	i = 0;
	mem1 = (unsigned char *)dest;
	mem2 = (const unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (mem1 < mem2)
	{
		while (n)
		{
			mem1[i] = mem2[i];
			n--;
			i++;
		}
	}
	else
	{
		while (n)
		{
			mem1[n - 1] = mem2[n - 1];
			n--;
		}
	}
	return (dest);
}
