/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:53:24 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:53:25 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	export(t_shell *sh, char **arg)
{
	if (!arg || !(*arg))
	{
		env_list_sort(sh->env, &cmp_by_alpha);
		display_env_list(sh->env, sh->pipe, EXPORT);
	}
	else
		env_add_args(sh, arg);
	sh->last_status = 0;
}
