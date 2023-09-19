/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:04:56 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/15 17:40:59 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*dest_c;
	unsigned char	*src_c;

	i = 0;
	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;
	while (i < n)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}
