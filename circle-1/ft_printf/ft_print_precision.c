/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:30:02 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:30:03 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_precision(t_list *status)
{
	int i;

	i = 0;
	while (i < status->precision)
	{
		ft_putchar('0', status);
		i++;
	}
}
