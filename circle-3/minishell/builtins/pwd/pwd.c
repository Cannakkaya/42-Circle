/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:53:32 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:53:33 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	pwd(t_shell *sh, char **arg)
{
	if (*arg)
	{
		sh->last_status = 1;
		return (display_error(0, "pwd", ERR_TOO_MANY_ARG));
	}
	put_str(sh->pipe[1], sh->wd);
	put_char(sh->pipe[1], '\n');
	sh->last_status = 0;
}
