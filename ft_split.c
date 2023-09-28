/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:53:32 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/28 20:53:32 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    char	**split;
    size_t	i;
    size_t	j;
    size_t	k;

    if (!s)
        return (0);
    split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
    if (!split)
        return (0);
    i = 0;
    j = 0;
    while (i < ft_count_words(s, c))
    {
        while (s[j] && s[j] == c)
            ++j;
        split[i] = (char *)malloc(sizeof(char) * (ft_wordlen(s, c, j) + 1));
        if (!split[i])
            return (0);
        k = 0;
        while (s[j] && s[j] != c)
            split[i][k++] = s[j++];
        split[i][k] = '\0';
        ++i;
    }
    split[i] = 0;
    return (split);
}
