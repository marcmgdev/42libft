/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:12:00 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/01/27 12:42:25 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst || !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	while (len)
	{
		((char *)dst)[len] = ((char *)src)[len];
		--len;
	}
}
