/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:07:12 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/01 10:47:50 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	a;

	a = 0;
	i = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));

	if (!str)
		return (NULL);
	while (s1[a])
		str[i++] = s1[a++];
	a = 0;
	while (s2[a])
		str[i++] = s2[a++];
	str[i] = 0;
	return (str);
}
