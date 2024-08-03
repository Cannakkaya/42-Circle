/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_special.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:29:25 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:29:25 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char_special(char c, t_list *status)
{
	ft_correct_flags(status);
	ft_print_padding(status, LEFT);
	ft_print_precision(status);
	if (c != '\0')
		ft_putchar(c, status);
	ft_print_padding(status, RIGHT);
}
