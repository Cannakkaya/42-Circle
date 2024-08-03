/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:53:46 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:53:46 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	unset(t_shell *sh, char **arg)
{
	if (!arg || !(*arg))
	{
		sh->last_status = 1;
		return (display_error(0, "unset", "not enough arguments"));
	}
	while (*arg)
		env_delete(sh, &(sh->env), *(arg++));
	sh->last_status = 0;
}
