/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:34:15 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 19:07:36 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char *st;
	const unsigned char *rc;
	unsigned char stop; // const

	stop = (unsigned char)c;
	st = (unsigned char *)dest;
	rc = (const unsigned char *)src;
	while (len--)
	{
		if (*rc == stop)
		{
			*st++ = *rc++;
			return (st);
		}
		*st++ = *rc++;
	}
	return (NULL);
}
