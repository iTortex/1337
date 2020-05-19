/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:40:14 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 19:48:52 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;

	i = 0;
	if (!s) // убрать защить
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i,s[i]);
		i++;
	}
	return (str);
}
