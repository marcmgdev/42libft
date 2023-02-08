/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:12:12 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/08 15:21:57 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	sep;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	sep = lendst;
	if (lendst < dstsize -1 && dstsize > 0)
	{
		while (src[i] && lendst + i < dstsize - 1)
		{
			dst[sep] = src[i];
			sep++;
			i++;
		}
		dst[sep] = 0;
	}	
	if (lendst >= dstsize)
		lendst = dstsize;
	return (lendst + lensrc);
}
