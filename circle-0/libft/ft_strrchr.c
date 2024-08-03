/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:26:03 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:26:03 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *temp;

	temp = NULL;
	while (*s)
	{
		if (*s == c)
			temp = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (temp);
}
