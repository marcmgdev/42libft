/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:13:02 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/16 16:07:12 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	n = -n;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n < 0)
		i = 1;
	len = numlen(n) + i;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	n = n * (((n < 0) * -2) + 1);
	while (len-- != i)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
