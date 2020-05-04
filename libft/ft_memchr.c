/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:57:21 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/02 15:29:33 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		i++;
		n--;
	}
	if (((unsigned char *)arr)[i] == c)
		return (&((unsigned char *)arr)[i]);
	else
		return (NULL);
}
