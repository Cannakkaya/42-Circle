/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:34:30 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:35:11 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rc/rc.h"

void	handle_up(t_raycaster *rc, t_dir *dir, t_map *map)
{
	double	used_dir_x;
	double	used_dir_y;

	used_dir_x = dir ? dir->dir_x : rc->p_dir_x;
	used_dir_y = dir ? dir->dir_y : rc->p_dir_y;
	if (map->grid[(int)(rc->p_pos_x + used_dir_x * rc->p_move_speed)]
	[(int)(rc->p_pos_y)] != 1)
		rc->p_pos_x += used_dir_x * rc->p_move_speed;
	if (map->grid[(int)(rc->p_pos_x)]
	[(int)(rc->p_pos_y + used_dir_y * rc->p_move_speed)] != 1)
		rc->p_pos_y += used_dir_y * rc->p_move_speed;
}

void	handle_down(t_raycaster *rc, t_dir *dir, t_map *map)
{
	double	used_dir_x;
	double	used_dir_y;

	used_dir_x = dir ? dir->dir_x : rc->p_dir_x;
	used_dir_y = dir ? dir->dir_y : rc->p_dir_y;
	if (map->grid[(int)(rc->p_pos_x - used_dir_x * rc->p_move_speed)]
	[(int)(rc->p_pos_y)] != 1)
		rc->p_pos_x -= used_dir_x * rc->p_move_speed;
	if (map->grid[(int)(rc->p_pos_x)]
	[(int)(rc->p_pos_y - used_dir_y * rc->p_move_speed)] != 1)
		rc->p_pos_y -= used_dir_y * rc->p_move_speed;
}

void	handle_left(t_raycaster *rc, t_map *map)
{
	t_dir	dir;

	dir.dir_x = -rc->p_dir_y;
	dir.dir_y = rc->p_dir_x;
	handle_up(rc, &dir, map);
}

void	handle_right(t_raycaster *rc, t_map *map)
{
	t_dir	dir;

	dir.dir_x = -rc->p_dir_y;
	dir.dir_y = rc->p_dir_x;
	handle_down(rc, &dir, map);
}
