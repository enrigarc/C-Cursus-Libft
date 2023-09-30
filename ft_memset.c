/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:59:11 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/15 17:09:05 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s_c;

	i = 0;
	s_c = (unsigned char *)s;
	while (i < n)
	{
		s_c[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
