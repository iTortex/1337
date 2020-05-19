/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:47:54 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 19:21:07 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *mem1;
	const unsigned char *mem2;

	mem1 = (unsigned char *)dest;
	mem2 = (const unsigned char *)src;
	if (!dest && !src) // исправить
		return (dest);
	if (mem1 < mem2)
		return (ft_memcpy(dest, src, n));
	while (n--)
		mem1[n] = mem2[n];
	return (dest);
}
