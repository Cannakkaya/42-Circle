/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:31:41 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 14:31:42 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H

# define _GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int				get_next_line(const int fd, char **line);
char			*ft_malloc_null(void);
char			*ft_str_add_char(char *s1, char c);

#endif
