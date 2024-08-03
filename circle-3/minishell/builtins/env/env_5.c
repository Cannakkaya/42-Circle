/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:52:56 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:52:57 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

static char		**malloc_list(t_shell *sh)
{
	char	**list;
	ssize_t	list_length;
	ssize_t	i;

	i = -1;
	list_length = env_length(sh->env, EXPORTED);
	if (!(list = ft_malloc(sh, scp_cmd, sizeof(char *) * (list_length + 1))))
		return (NULL);
	while (++i < list_length)
	{
		if (!(list[i] = ft_malloc(sh, scp_cmd, sizeof(char[BUFF]))))
		{
			while (--i >= 0)
				ft_free(sh, list[i]);
			ft_free(sh, list);
			return (NULL);
		}
	}
	list[i] = NULL;
	return (list);
}

char			**get_env_list(t_shell *sh)
{
	t_var	*env;
	char	**list;
	char	**ref_ptr;
	char	*ref;

	if (!(list = malloc_list(sh)))
		return (NULL);
	ref_ptr = list;
	env = sh->env;
	while (env)
	{
		if (env->exported)
		{
			ref = *list;
			str_cpy(*list, env->name);
			*list += str_len(env->name);
			**list = '=';
			*list += 1;
			str_cpy(*list, env->value);
			*list = ref;
			list++;
		}
		env = env->next;
	}
	return (ref_ptr);
}
