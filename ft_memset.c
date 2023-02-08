/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:12:03 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/08 15:06:59 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*str;

str = (char *)b;
i = 0;
	while (i++ <= len)
		str[i] = c;
	return (str);
}
