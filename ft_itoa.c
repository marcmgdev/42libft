/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:13:02 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/16 14:45:58 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_nbr(long long n, int len, char *r)
{
	while (n)
	{
		r[len--] = 48 + (n % 10);
		n /= 10;
	}
}

int	ft_len(int n)
{
	int	c;

	c = 0;
	if (n < 0)
		c++;
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long long	nb;
	int			len;
	char		*r;

	len = ft_len(n);
	if (!len)
	{
		r = (char *)malloc(2);
		r[0] = '0';
		r[1] = 0;
		return (r);
	}
	r = (char *)malloc(len * sizeof(char) + 1);
	if (!r)
		return (NULL);
	r[len--] = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		r[0] = '-';
	}
	ft_nbr(nb, len, r);
	return (r);
}	
