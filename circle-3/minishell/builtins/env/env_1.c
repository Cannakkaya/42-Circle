/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:52:30 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:52:31 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	display_env_list(t_var *env, int *pipe, int mode)
{
	t_var *temp;

	temp = env;
	if (!temp)
		return ;
	while (temp)
	{
		if (temp->exported &&
		(mode != ENV || temp->modified || !!str_cmp(temp->value, "")))
		{
			put_str(pipe[1], temp->name);
			put_char(pipe[1], '=');
			if (mode == EXPORT && !str_cmp(temp->value, ""))
				put_str(pipe[1], "''");
			else
				put_str(pipe[1], temp->value);
			put_char(pipe[1], '\n');
		}
		temp = temp->next;
	}
}

void	env(t_shell *sh, char **arg)
{
	if (str_len_2d(arg) > 1)
	{
		sh->last_status = 1;
		return (display_error(0, "env", ERR_TOO_MANY_ARG));
	}
	env_list_sort(sh->env, &cmp_by_id);
	display_env_list(sh->env, sh->pipe, ENV);
	sh->last_status = 0;
}
