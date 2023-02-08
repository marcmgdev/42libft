/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:12:26 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/08 15:22:48 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_size;

	s_size = ft_strlen(s);
	while (s_size != 0 && (char)c != *s)
		s--;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}
