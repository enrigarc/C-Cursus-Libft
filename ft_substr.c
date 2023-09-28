/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:23:03 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/28 16:23:03 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*sub;
    size_t	i;

    if (!s)
        return (0);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    sub = (char *)malloc(sizeof(char) * (len + 1));
    if (!sub)
        return (0);
    i = 0;
    while (i < len && s[start + i])
    {
        sub[i] = s[start + i];
        ++i;
    }
    sub[i] = '\0';
    return (sub);
}

int main(void)
{
    char *s = "Hola";
    char *sub = ft_substr(s, 0, 2);
    printf("%s\n", sub);
    return (0);
}
