/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:04:44 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/05 20:39:59 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *d, const char *l, size_t len)
{
	int i;
	int n;

	i = 0;
	if (*l == '\0')
		return ((char *)d);
	while (d[i] != l[0] && len--)
		i++;
	if (d[i] == l[0] && len != 0)
	{
		n = i;
		while (d[i] == *l && len--)
		{
			i++;
			l++;
		}
		if (*l == '\0')
			return (&((char *)d)[n]);
	}
	return (NULL);
}
