/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimelda <aimelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:22:39 by aimelda           #+#    #+#             */
/*   Updated: 2019/10/26 18:33:48 by aimelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(void)
{
	int		fd;
	int		i;
	char	*line;

	fd = open("test2", O_RDONLY);
	while ((i = get_next_line(fd, &line)) == 1)
	{
		printf("%i: %s\n", fd, line);
		free(line);
	}
	if (i == -1)
		printf("%i - Error\n", i);
	else
		printf("Reading finished!\n");
	close(fd);
}
