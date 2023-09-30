/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:18:19 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/29 23:18:19 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
    char	*cpy;
    int		i;

    i = 0;
    cpy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!cpy)
        return (NULL);
    while (s[i])
    {
        cpy[i] = s[i];
        i++;
    }
    cpy[i] = 0;
    return (cpy);
}