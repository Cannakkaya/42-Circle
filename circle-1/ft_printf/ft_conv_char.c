/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:27:54 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:27:54 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_char(char c)
{
	char	*res;

	if (!(res = malloc(sizeof(char) * 2)))
		return (NULL);
	res[0] = c;
	res[1] = '\0';
	return (res);
}
