/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:54:19 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 19:40:11 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	if (!s1 || !s2) // я бы убрал защиту
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(i, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcat(str, s1, i + 1);
	ft_strlcat(str, s2, i + 1);
	return (str);
}
