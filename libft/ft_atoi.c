/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 12:13:17 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/12 21:57:24 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int z;
	unsigned int m;

	i = 0;
	z = 1;
	m = 0;
	while (((str[i] >= 9 && str[i] <= 13) || (str[i] == ' ')) && str[i] != '\0')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			z = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0' && str[i] != '\0')
	{
		m = (m * 10) + (str[i] - '0');
		i++;
	}
	return (m * z);
}
