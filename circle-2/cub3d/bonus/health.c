/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   health.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:32:39 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:32:39 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rc/rc.h"

int		create_health_bar(t_raycaster *rc)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < rc->width / 8)
	{
		j = 0;
		while (j < rc->height / 20)
		{
			rc->img_data[i + rc->width / 10 +
			((j + rc->height * 9 / 10) * rc->width)] = rgb_to_int(255, 0, 0);
			j++;
		}
		i++;
	}
	return (1);
}
