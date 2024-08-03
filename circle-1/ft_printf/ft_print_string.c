/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:30:08 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:30:08 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_correct_string_flags(t_list *s)
{
	int	len;

	len = (int)ft_strlen(s->res);
	if (s->padding < 0)
	{
		s->padding *= -1;
		s->zero = 0;
		s->minus = 1;
	}
	if (s->res == NULL)
	{
		if (s->precision > 0)
			s->precision = -1;
		s->padding = s->padding - len;
		return ;
	}
	s->padding = s->padding - len;
	if (s->precision > 0)
		s->precision = -1;
}

void			ft_print_string(t_list *status)
{
	if (status->precision > (int)ft_strlen(status->res))
		status->precision = -1;
	ft_correct_string_flags(status);
	ft_print_padding(status, LEFT);
	ft_print_precision(status);
	ft_putstr(status->res, status);
	ft_print_padding(status, RIGHT);
}
