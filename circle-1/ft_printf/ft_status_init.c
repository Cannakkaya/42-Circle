/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_status_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:30:58 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:30:59 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_status_init(t_list *status)
{
	status->res = NULL;
	status->count = 0;
	status->flags_to_skip = 1;
	status->is_neg = 0;
	status->minus = 0;
	status->padding = 0;
	status->zero = 0;
	status->precision = -1;
	status->is_num = 0;
	status->end = 0;
}
