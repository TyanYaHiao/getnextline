/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 20:49:29 by fsmith            #+#    #+#             */
/*   Updated: 2019/01/14 19:41:27 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*s;

	s = (unsigned char*)malloc(sizeof(unsigned char) * size);
	if (!s)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
