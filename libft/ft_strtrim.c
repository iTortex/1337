/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:46:41 by amarcele          #+#    #+#             */
/*   Updated: 2020/05/17 19:29:08 by amarcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int j;
    int p;
    int x;
    char *news;

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
    news = ft_substr(s1, x ,j + 1);
    if (!news)
        return (NULL);
    return (news);
}
