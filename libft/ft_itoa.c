/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 16:20:04 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/11 20:18:11 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sch(int ch)
{
	int y;

	y = 0;
	while (ch)
	{
		y++;
		ch = ch / 10;
	}
	return (y);
}

char				*ft_itoa(int num)
{
	int				i;
	char			*str;
	int				x;
	unsigned int	z;

	x = 0;
	z = num;
	if ((i = num) <= 0)
	{
		x++;
		z = -num;
	}
	x = x + sch(i);
	str = ft_calloc(x + 1, sizeof(char));
	if (z == 0)
		str[0] = '0';
	while (z)
	{
		str[--x] = (z % 10) + '0';
		z = z / 10;
	}
	if (num < 0)
		str[--x] = '-';
	return (str);
}
