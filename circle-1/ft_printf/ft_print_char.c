/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:29:29 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:29:30 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_print_char(t_list *s)
{
	s->precision = 0;
	ft_correct_flags(s);
	ft_print_padding(s, LEFT);
	ft_print_precision(s);
	if (s->res && s->res[0] == 0 && s->precision <= 0)
		ft_putchar('\0', s);
	else
		ft_putstr(s->res, s);
	ft_print_padding(s, RIGHT);
}
