/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <wp3d3p@yandex.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:46:41 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/19 21:07:50 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int j;
    int p;
    int x;

    if (!s1 || !set)
        return (NULL);
    j = ft_strlen(s1) - 1;
    p = 0;
    x = 0;
    while (set[p] != '\0' && s1[x] != 0)
    {
        while (set[p] != s1[x] && set[p] != '\0')
            p++;
        if (set[p] == s1[x])
        {
            p = 0;
            x++;
        }
    }
    p = 0;
    while (set[p] != '\0' && s1[x] != 0)
    {
        while (set[p] != s1[j] && set[p] != '\0')
            p++;
        if (set[p] == s1[j])
        {
            p = 0;
            j--;
        }
    }
    j -= x;
    return (ft_substr(s1, x ,j + 1));
}
