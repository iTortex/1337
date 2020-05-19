/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:05:36 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 19:44:00 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;

	if (!dst && !src) // подумой
		return (0);
	i = ft_strlen(src);
	while (size > 1 && *src != '\0')
	{
		*dst++ = *src++;
		size--;
	}
	if (size != 0)
		*dst = '\0';
	return (i);
}
