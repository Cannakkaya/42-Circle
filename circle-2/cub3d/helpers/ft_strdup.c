/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:34:04 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:34:05 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../map/map.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (src && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char		*ft_strdup(const char *s1)
{
	size_t	length;
	char	*ptr;

	length = ft_strlen(s1);
	if (!(ptr = (char *)malloc(sizeof(char) * length + 1)))
		return (NULL);
	ptr = ft_strcpy(ptr, s1);
	return (ptr);
}
