/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:32:44 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:32:45 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rc/rc.h"

int		create_minimap(t_raycaster *rc)
{
	int		factor;
	int		i;
	int		j;

	i = -1;
	j = -1;
	factor = rc->width / rc->height * 4;
	while (++i < rc->map->column_nbr * factor)
	{
		j = -1;
		while (++j < rc->map->line_nbr * factor)
		{
			if (rc->map->grid[j / factor][i / factor] == 1)
				rc->img_data[limit(i + rc->width / 10 +
				(j + rc->height / 15) * rc->width
				, rc->width * rc->height - 1)] = rgb_to_int(255, 130, 200);
			else if ((int)rc->p_pos_x == j / factor
			&& (int)rc->p_pos_y == i / factor)
				rc->img_data[limit(i + rc->width / 10 +
				(j + rc->height / 15) * rc->width
				, rc->width * rc->height - 1)] = rgb_to_int(200, 255, 50);
		}
	}
	return (1);
}
