/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:34:22 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:34:23 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rc/rc.h"

void	rotate_left(t_raycaster *rc)
{
	double old_dir_x;
	double old_plane_x;

	old_dir_x = rc->p_dir_x;
	old_plane_x = rc->p_plane_x;
	rc->p_dir_x = rc->p_dir_x
	* cos(rc->p_rotation_speed) - rc->p_dir_y * sin(rc->p_rotation_speed);
	rc->p_dir_y = old_dir_x
	* sin(rc->p_rotation_speed) + rc->p_dir_y * cos(rc->p_rotation_speed);
	rc->p_plane_x = rc->p_plane_x
	* cos(rc->p_rotation_speed) - rc->p_plane_y * sin(rc->p_rotation_speed);
	rc->p_plane_y = old_plane_x
	* sin(rc->p_rotation_speed) + rc->p_plane_y * cos(rc->p_rotation_speed);
}

void	rotate_right(t_raycaster *rc)
{
	double old_dir_x;
	double old_plane_x;

	old_dir_x = rc->p_dir_x;
	old_plane_x = rc->p_plane_x;
	rc->p_dir_x = rc->p_dir_x
	* cos(-rc->p_rotation_speed) - rc->p_dir_y * sin(-rc->p_rotation_speed);
	rc->p_dir_y = old_dir_x
	* sin(-rc->p_rotation_speed) + rc->p_dir_y * cos(-rc->p_rotation_speed);
	rc->p_plane_x = rc->p_plane_x
	* cos(-rc->p_rotation_speed) - rc->p_plane_y * sin(-rc->p_rotation_speed);
	rc->p_plane_y = old_plane_x
	* sin(-rc->p_rotation_speed) + rc->p_plane_y * cos(-rc->p_rotation_speed);
}

int		handle_keys(int keycode, t_raycaster *rc)
{
	if (keycode == KEY_UP)
		handle_up(rc, NULL, rc->map);
	else if (keycode == KEY_DOWN)
		handle_down(rc, NULL, rc->map);
	else if (keycode == KEY_LEFT)
		handle_left(rc, rc->map);
	else if (keycode == KEY_RIGHT)
		handle_right(rc, rc->map);
	else if (keycode == ARROW_RIGHT)
		rotate_right(rc);
	else if (keycode == ARROW_LEFT)
		rotate_left(rc);
	else if (keycode == ESCAPE)
		program_end(rc);
	else
		return (0);
	cast_ray(rc, rc->map);
	return (1);
}
