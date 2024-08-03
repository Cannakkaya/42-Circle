/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_correct_precision_zero.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:28:27 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:28:27 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_correct_precision_zero(t_list *status)
{
	if (status->res && status->precision == 0 && status->res[0] == '0')
		status->res[0] = ' ';
}
