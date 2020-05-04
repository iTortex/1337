/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 14:24:00 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/01 20:33:38 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while (n != 0 || ((char *)s)[i] == '\0')
	{
		((char *)s)[i] = 0;
		n--;
		i++;
	}
}
