/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:51:55 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/28 20:51:55 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtim(char const *s1, char const *set)
{
    char	*trim;
    size_t	i;
    size_t	j;
    size_t	k;

    if (!s1 || !set)
        return (0);
    i = 0;
    while (s1[i] && ft_strchr(set, s1[i]))
        ++i;
    j = ft_strlen(s1);
    while (j > i && ft_strchr(set, s1[j]))
        --j;
    trim = (char *)malloc(sizeof(char) * (j - i + 2));
    if (!trim)
        return (0);
    k = 0;
    while (i <= j)
    {
        trim[k] = s1[i];
        ++i;
        ++k;
    }
    trim[k] = '\0';
    return (trim);
}
