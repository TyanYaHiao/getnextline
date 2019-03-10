/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 19:30:42 by fsmith            #+#    #+#             */
/*   Updated: 2019/02/27 18:43:58 by fsmith           ###   ########.fr       */
/*                           et_next_line.h           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <unistd.h>
# include "libft/libft.h"

# define BUFF_SIZE 100
# define MAX_FD 65524

int		get_next_line(const int fd, char **line);

#endif
