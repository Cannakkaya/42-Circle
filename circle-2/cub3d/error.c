/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:43:58 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:43:59 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map.h"

int		display_error(int errnum, char *error)
{
	ft_putstr_fd("Error\n", 2);
	if (!error)
	{
		errno = errnum;
		ft_putstr_fd(strerror(errno), 2);
	}
	else
		ft_putstr_fd(error, 2);
	return (0);
}
