/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimelda <aimelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 15:43:25 by aimelda           #+#    #+#             */
/*   Updated: 2019/10/15 17:22:48 by aimelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 7

# include "libft/libft.h"

typedef struct	s_fd
{
	char		*txt;
	char		*cur;
	int			fd;
}				t_fd;

int				get_next_line(const int fd, char **line);

#endif
