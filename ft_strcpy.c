/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:12:15 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/09 18:39:08 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	cont;
	unsigned int	idx;

	cont = 0;
	idx = 0;
	while (src[cont] != '\0')
		cont++;
	if (dstsize != 0)
	{
		while (src[idx] != '\0' && idx < (dstsize - 1))
		{
			dst[idx] = src[idx];
			idx++;
		}
		dst[idx] = '\0';
	}
	return (cont);
}
