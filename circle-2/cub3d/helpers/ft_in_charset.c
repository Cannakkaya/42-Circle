/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_charset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:33:43 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:33:43 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset && charset[i])
	{
		if (c == charset[i])
			return (i);
		i++;
	}
	return (-1);
}
