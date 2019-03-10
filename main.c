/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 16:59:09 by fsmith            #+#    #+#             */
/*   Updated: 2019/02/27 18:43:54 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#define FILENAME "/Users/fsmith/projects/get_next_line/test.txt"
#define WARANDPEACE "/Users/fsmith/projects/get_next_line/war-and-peace.txt"

int				main(void)
{
	int		fd;
	char 	*line;
	int 	one;
	int		i;

	i = 5;
	one = 0;
	if ((fd = open(WARANDPEACE, O_RDONLY)) == -1)
		ft_putendl("File error!");
	while (get_next_line(fd, &line) > 0)
	{

		printf("%s\n", line);
			free(line);
	}
	close(fd);

	if ((fd = open(FILENAME, O_RDONLY)) == -1)
		ft_putendl("File error!");

		printf("%d\n", get_next_line(fd, &line));
		printf("%s\n", line);
		free(line);

	close(fd);
	return (0);
}
