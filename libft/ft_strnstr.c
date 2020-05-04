/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:04:44 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/03 16:26:28 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *d, const char *l, size_t len)
{
	if (l[0] == '\0')
		return (((unsigned char *)d));
	int i;

	i = 0;
	while (d[i] != l[0] && len != 0 && d[i] != '\0')
	{
		i++;
		len--;
	}
	if (d[i] == '\0')
		return (NULL);
	else
		return (&((unsigned char *)d)[i]);
}
