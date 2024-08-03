/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:55:56 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:55:57 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void		init_pipe(t_shell *sh)
{
	static int	stdin_copy;
	static int	stdout_copy;
	static int	init = 0;

	if (!init)
	{
		stdin_copy = dup(0);
		stdout_copy = dup(1);
		init = 1;
	}
	else
	{
		sh->pipe[0] = 0;
		sh->pipe[1] = 1;
		dup2(stdin_copy, sh->pipe[0]);
		dup2(stdout_copy, sh->pipe[1]);
	}
}

static int	is_valid(t_shell *sh, char ***args)
{
	if (*(*args + 1))
		return (1);
	put_str(2, "minishell: syntax error near unexpected token `");
	put_str(2, **args);
	put_str(2, "'\n");
	sh->last_status = 258;
	return (0);
}

static int	check_all_args(t_shell *sh, char ***args)
{
	while (*args)
	{
		if (!str_cmp(**args, "|") || !str_cmp(**args, ";"))
		{
			if (!is_valid(sh, args))
				return (0);
		}
		args++;
	}
	return (1);
}

void		handle_args(t_shell *sh)
{
	char	**par;

	init_pipe(sh);
	par = NULL;
	if (!check_all_args(sh, sh->args))
		return ;
	while (*(sh->args))
	{
		if (!str_cmp(**(sh->args), ">") || !str_cmp(**(sh->args), ">>"))
			redir_right(sh, &par);
		else if (!str_cmp(**(sh->args), "<"))
		{
			init_pipe(sh);
			redir_left(sh, &par);
		}
		else if (!str_cmp(**(sh->args), "|"))
			sh->args += handle_pipes(sh) - 1;
		else
		{
			execute_command(sh, *(sh->args) + 1);
			init_pipe(sh);
		}
		(sh->args)++;
	}
}
