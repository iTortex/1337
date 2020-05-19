/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 17:24:40 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 19:37:55 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char *const	copy = (char *const)malloc(ft_strlen(s) + 1);
	int			i;

	i = 0;
	if (copy == NULL)
		return (NULL);
	while (s[i]) // strlcpy
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
