/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 16:20:04 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/14 20:15:10 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ravn(char *str1, int n,int nom)
{
	char *str;

	str = ft_strdup(str1);
	while (n)
	{
		str[nom--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char				*ft_itoa(int num)
{
	char			*str;
	int				i;
	int				ch;

	i = 0;
	ch = num;
	if (num < 0)
		i++;
	while (num)
	{
		i++;
		num = num / 10;
	}
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (ch < 0)
	{
		str[0] = '-';
		ch *= -1;
	}
	str = ravn(str, ch, i);
	return (str);
}

int main(void)
{
  int x = -123;
  printf("%s\n", ft_itoa(x));
}
