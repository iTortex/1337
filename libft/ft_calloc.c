/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 18:58:02 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/13 22:06:49 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		{
			nmemb = 1;
			size = 1;
		}
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size * nmemb);
	return (mem);
}
