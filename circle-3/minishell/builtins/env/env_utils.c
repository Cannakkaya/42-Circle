/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:53:05 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:53:05 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

static int		ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

static int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

static int		ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

static int		is_variable_char(int c)
{
	return (ft_isalnum(c) || c == '_');
}

size_t			variable_name_size(char *variable)
{
	size_t i;

	i = 0;
	if (!variable)
		return (i);
	while (is_variable_char(variable[i]))
		i++;
	return (i);
}
