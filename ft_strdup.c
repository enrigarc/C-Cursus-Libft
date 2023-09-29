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
    char	*ptr;
    int		len;

    len = ft_strlen(s);
    ptr = malloc(len + 1);
    if (!ptr)
        return (0);
    ft_strlcpy(ptr, s, len + 1);
    return (ptr);
}
