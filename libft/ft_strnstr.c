/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:04:44 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/24 21:57:04 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *d, const char *l, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!d[i])
		return (NULL);
	if (*l == '\0')
		return ((const char *)d);
	while (d[i] != l[0] && len--)
		i++;
	if (d[i] == l[0] && len != 0)
	{
		while (d[i++] == l[j++] && len-- && l[j] != '\0')
		{
			if (d[i] != l[j])
				j = 0;
		}
		if (l[j] == '\0')
			return (&((const char *)d)[i - strlen(l)]);
	}
	return (NULL);
}
