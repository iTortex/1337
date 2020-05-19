/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 18:58:02 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 18:51:24 by hgranule         ###   ########.fr       */
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
