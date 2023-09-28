/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:49:04 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/28 20:49:04 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char	*join;
    size_t	i;
    size_t	j;

    if (!s1 || !s2)
        return (0);
    join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!join)
        return (0);
    i = 0;
    while (s1[i])
    {
        join[i] = s1[i];
        ++i;
    }
    j = 0;
    while (s2[j])
    {
        join[i + j] = s2[j];
        ++j;
    }
    join[i + j] = '\0';
    return (join);
}
