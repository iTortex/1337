/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:57:21 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 19:07:33 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char *a;
	unsigned char co; // const

	a = (unsigned char *)arr;
	co = (unsigned char)c;
	while (n--)
	{
		if (*a == co)
			return (a);
		a++;
	}
	return (NULL);
}
