/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:43:36 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:43:46 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map.h"

static int		ft_check_map_name(char *arg)
{
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(arg);
	if (len < 3)
		return (display_error(0, "Bad file name.\n"));
	while (len--)
	{
		if (i == 0 && arg[len] != 'b')
			return (display_error(0, "Bad file extension.\n"));
		if (i == 1 && arg[len] != 'u')
			return (display_error(0, "Bad file extension.\n"));
		if (i == 2 && arg[len] != 'c')
			return (display_error(0, "Bad file extension.\n"));
		if (i == 3 & arg[len] != '.')
			return (display_error(0, "Bad file extension.\n"));
		i++;
	}
	return (1);
}

static int		ft_check_save_arg(char *arg, t_map *map)
{
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(arg);
	if (len != 5)
		return (display_error(0, "Bad second argument.\n"));
	while (len--)
	{
		if (i == 0 && arg[len] != 'e')
			return (display_error(0, "Bad second argument.\n"));
		if (i == 1 && arg[len] != 'v')
			return (display_error(0, "Bad second argument.\n"));
		if (i == 2 && arg[len] != 'a')
			return (display_error(0, "Bad second argument.\n"));
		if (i == 3 && arg[len] != 's')
			return (display_error(0, "Bad second argument.\n"));
		if (i == 4 && arg[len] != '-')
			return (display_error(0, "Bad second argument.\n"));
		i++;
	}
	map->save = 1;
	return (1);
}

int				ft_check_args(int argc, char **argv, t_map *map)
{
	int i;

	i = 0;
	if (argc < 2)
		return (display_error(0, "Bad arguments count.\n"));
	if (!ft_check_map_name(argv[1]))
		return (0);
	if (argc > 2)
		if (!ft_check_save_arg(argv[2], map))
			return (0);
	return (1);
}
