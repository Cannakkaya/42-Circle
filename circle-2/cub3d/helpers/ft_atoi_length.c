/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:33:23 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:33:24 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../map/map.h"

int	ft_atoi_length(const char *str)
{
	int count;

	count = 0;
	if (!str)
		return (-1);
	while (*str && *str == ' ')
	{
		count++;
		str++;
	}
	if (*str && (*str == '-' || *str == '+'))
	{
		str++;
		count++;
	}
	while (*str && ft_isdigit(*str))
	{
		count++;
		str++;
	}
	return (count);
}
