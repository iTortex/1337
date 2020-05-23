/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:04:44 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/23 16:00:58 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *d, const char *l, size_t len)
{
	int i;
	int n;
	int j;

	i = 0;
	j = 0;
	if (*l == '\0')
		return ((char *)d);
	while (d[i] != l[0] && len--)
		i++;
	if (d[i] == l[0] && len != 0)
	{
		n = i;
		while (d[i] == l[j] && len-- && l[j] != '\0')
		{
			i++;
			j++;
			if (d[i] != l[j])
				j = 0;
		}
		if (l[j] == '\0')
			return (&((char *)d)[n]);
	}
	return (NULL);
}
