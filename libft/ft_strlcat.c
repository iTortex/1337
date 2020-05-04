/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:25:03 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/02 22:20:14 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int x;

	x = 0;
	i = ft_strlen(dst);
	while (size != 0)
	{
		dst[i] = src[x];
		i++;
		x++;
		size--;
	}
	dst[i] = '\0';
	return (i);
}
