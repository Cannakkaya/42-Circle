/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:23:32 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:23:33 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *source;

	source = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*source == (unsigned char)c)
			return (source);
		source++;
	}
	return (NULL);
}
