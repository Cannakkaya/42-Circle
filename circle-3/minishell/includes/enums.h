/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:54:28 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:54:28 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

# include "const.h"

typedef enum	e_mtyp
{
	m_fd,
	m_mal
}				t_mtyp;

typedef enum	e_scop
{
	scp_sh,
	scp_cmd
}				t_scop;

#endif
