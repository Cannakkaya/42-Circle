/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_cmds_utils_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:54:01 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:54:01 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		is_quot_spe(char quot, char c)
{
	if (quot == '\"' && (c == '\\' || c == '$' || c == '`' || c == '"'
		|| c == '\\'))
		return (1);
	return (0);
}

int		is_arg_sep(char c)
{
	if (c == '\t' || c == '\n' || c == '\r'
		|| c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int		is_cmd_sep(char c)
{
	if (c == ';' || c == '|' || c == '<'
		|| c == '>')
		return (1);
	return (0);
}

int		is_quot(char c)
{
	if (c == '\'' || c == '\"')
		return (1);
	return (0);
}
