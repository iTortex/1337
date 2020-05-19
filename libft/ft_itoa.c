/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 16:20:04 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/17 23:25:49 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ravn(char *str1, int n,int nom)
{
	unsigned int ch2;

	ch2 = n;
	if (ch2 == 0)
		{
			str1[nom--] = ch2 + '0';
			return (str1);
		}
	while (ch2)
	{
		str1[nom--] = (ch2 % 10) + '0';
		ch2 /= 10;
	}
	return (str1);
}

char				*ft_itoa(int num)
{
	char			*str;
	int				i;
	int	ch;
	unsigned int pol;

	i = 0;
	ch = num;
	if (num <= 0)
		i++;
	while (num)
	{
		i++;
		num = num / 10;
	}
	str = ft_calloc(i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	pol = ch;
	if (ch < 0)
	{
		str[0] = '-';
		pol = ch * -1;
	}
	str = ravn(str, pol, i);
	return (str);
}
