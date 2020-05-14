/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:34:15 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/13 20:40:14 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char *st;
	const unsigned char *rc;
	unsigned char stop;

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
