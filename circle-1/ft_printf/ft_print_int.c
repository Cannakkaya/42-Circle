/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:29:40 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:29:40 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(t_list *s)
{
	if (s->padding <= 0 && s->precision == 0 && s->res[0] == '0')
		return ;
	ft_correct_flags(s);
	ft_correct_precision_zero(s);
	if (s->is_neg)
		s->padding--;
	if (s->is_neg && (!s->minus && s->precision <= 0 && s->zero))
		ft_putchar('-', s);
	ft_print_padding(s, LEFT);
	if (s->is_neg && (s->precision > 0))
		ft_putchar('-', s);
	ft_print_precision(s);
	if (s->is_neg && ((s->minus && s->precision <= 0)
	|| (!s->zero && s->precision <= 0)))
		ft_putchar('-', s);
	ft_putstr(s->res, s);
	ft_print_padding(s, RIGHT);
}
