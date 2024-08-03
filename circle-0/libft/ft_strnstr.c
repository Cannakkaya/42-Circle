/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:25:55 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:25:55 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t length;

	length = ft_strlen(needle);
	i = 0;
	if (length == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle && len - i >= length &&
		ft_strncmp(&haystack[i], needle, length) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
