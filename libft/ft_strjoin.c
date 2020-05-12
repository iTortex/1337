/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:54:19 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/11 20:02:04 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	i = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(i, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcat(str, s1, i + 1);
	ft_strlcat(str, s2, i + 1);
	return (str);
}
