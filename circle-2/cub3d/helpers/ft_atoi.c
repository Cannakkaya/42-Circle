/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:33:35 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:33:36 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../map/map.h"

int	ft_atoi(const char *str)
{
	int result;
	int sign;

	sign = 1;
	result = 0;
	if (!str)
		return (-1);
	while (*str && *str == ' ')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && (ft_isdigit(*str)))
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (result * sign);
}
