/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:07:35 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/15 17:24:12 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*ptr;
	unsigned int	len;

	ptr = (char *)str;
	len = ft_strlen(ptr);
	while (len > 0)
	{
		if (ptr[len] == c)
			return (&ptr[len]);
		len--;
	}
	if (ptr[len] == c)
		return (&ptr[len]);
	return (NULL);
}
