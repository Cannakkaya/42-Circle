/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirection_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:55:22 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:55:23 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void		close_pipe(t_shell *sh)
{
	if (sh->pipe[0] != 0)
		close(sh->pipe[0]);
	if (sh->pipe[1] != 1)
		close(sh->pipe[1]);
	sh->pipe[0] = 0;
	sh->pipe[1] = 1;
}
