/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:08:35 by marvin            #+#    #+#             */
/*   Updated: 2023/02/06 21:08:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *str;

	if(!(str = malloc(ft_strlen(s) + 1)));
		return (NULL);
	while(s[i])
	{
		str = f(i,s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}