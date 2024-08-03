/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:52:12 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:52:12 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void			set_old_pwd(t_shell *sh, char *old_pwd)
{
	t_var	*old;
	t_nv	nv;

	if (!(old = env_find(sh->env, "OLDPWD", EXPORTED)))
	{
		nv.name = "OLDPWD";
		nv.value = old_pwd;
		if (!(old = env_new(sh, &nv,
		env_length(sh->env, EXPORTED), EXPORTED)))
			return (display_error(ENOMEM, "cd", NULL));
		env_add_front(&sh->env, old);
	}
	else
		env_change(old, old_pwd);
}

void			set_new_pwd(t_shell *sh)
{
	t_var	*pwd;
	char	pwd_value[BUFF];
	t_nv	nv;

	if (!getcwd(pwd_value, BUFF))
		return (display_error(errno, "cd", NULL));
	if (!(pwd = env_find(sh->env, "PWD", EXPORTED)))
	{
		nv.name = "PWD";
		nv.value = pwd_value;
		if (!(pwd = env_new(sh, &nv,
		env_length(sh->env, EXPORTED), EXPORTED)))
			return (display_error(ENOMEM, "cd", NULL));
		env_add_front(&sh->env, pwd);
	}
	else
		env_change(pwd, pwd_value);
	str_cpy(sh->wd, pwd_value);
}
