/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags_length.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:27:33 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:27:34 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_check_flags_length(const char *s)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s && (ft_isdigit(*s) || *s == '-' || *s == '*' || *s == '.'))
	{
		count++;
		s++;
	}
	return (count);
}
