/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_padding.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:29:58 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:29:58 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_padding(t_list *status, int side)
{
	int		i;
	char	c;

	c = status->zero && !status->minus ? '0' : ' ';
	i = -1;
	if (side == LEFT)
		while ((++i < status->padding) && !status->minus)
			ft_putchar(c, status);
	else if (side == RIGHT)
		while ((++i < status->padding) && status->minus)
			ft_putchar(c, status);
}
