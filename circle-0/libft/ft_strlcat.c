/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:25:24 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:25:24 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t length;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	length = i;
	if (dstsize == 0)
		return (length + ft_strlen(src));
	while (src[i - length] && i < dstsize - 1)
	{
		dst[i] = src[i - length];
		i++;
	}
	if (length < dstsize)
		dst[i] = '\0';
	return (length + ft_strlen(src));
}
