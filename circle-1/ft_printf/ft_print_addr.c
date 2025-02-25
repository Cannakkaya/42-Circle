/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:29:20 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:29:20 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_correct_zero(t_list *status)
{
	if (status->res && status->precision == 0 && status->res[0] == '0')
	{
		status->res[0] = '\0';
		status->padding++;
	}
}

void		ft_print_addr(t_list *status)
{
	ft_correct_flags(status);
	ft_correct_zero(status);
	status->padding = status->padding - 2;
	if (!status->minus && status->zero && status->precision <= 0)
		ft_putstr("0x", status);
	ft_print_padding(status, LEFT);
	if (!status->zero || status->minus)
		ft_putstr("0x", status);
	ft_print_precision(status);
	if (status->res && status->precision == 0 && status->res[0] == '0')
		ft_putchar('\0', status);
	else
		ft_putstr(status->res, status);
	ft_print_padding(status, RIGHT);
}
