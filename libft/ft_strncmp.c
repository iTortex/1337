/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:52:36 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/03 17:03:34 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;
	while (n != 0 && (str1[i] != '\0' || str2[i] != '\0'))
	{
		n--;
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}
