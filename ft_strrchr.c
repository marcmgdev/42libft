/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:12:26 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/16 12:51:56 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i_last;

	if (!s)
		return (NULL);
	i_last = ft_strlen(s);
	while (i_last > -1)
	{
		if (s[i_last] == (char)c)
			return ((char *)(s + i_last));
		i_last--;
	}
	return (NULL);
}
