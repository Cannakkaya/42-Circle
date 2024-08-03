/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:29:34 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:29:35 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(t_list *s)
{
	if (s->padding <= 0 && s->precision == 0 && s->res[0] == '0')
		return ;
	ft_correct_flags(s);
	ft_correct_precision_zero(s);
	ft_print_padding(s, LEFT);
	ft_print_precision(s);
	ft_putstr(s->res, s);
	ft_print_padding(s, RIGHT);
}
