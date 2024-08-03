/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:53:18 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:53:18 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	exit_shell(t_shell *sh, char **arg)
{
	size_t	arg_len;
	int		status_code;

	status_code = (arg && *arg) ? ft_atoi(*arg) : sh->last_status;
	(void)sh;
	arg_len = str_len_2d(arg);
	if (arg_len > 1)
		return (display_error(0, "exit", ERR_TOO_MANY_ARG));
	ft_free_scp(sh, NULL, scp_sh);
	exit(status_code);
}
