/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:34:15 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/05 21:49:09 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char *st;
	unsigned char *rc;

	st = (unsigned char *)dest;
	rc = (unsigned char *)src;
	while (*rc != c && len--)
	{
		*st = *rc;
		st++;
		rc++;
	}
	if (*rc == c)
	{
		*st = *rc;
		return (++st);
	}
	return (NULL);
}
