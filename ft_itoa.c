/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:13:02 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/01 12:17:48 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
    char *str;
    int n2;

    n2 = 1;
    str = (int)malloc(sizeof(n));
    if(!str)
        return (NULL);
    if(n < 0)
        n2 *= n;
    else
       n2 += 48;
    if(str)
        *str = n2;
    return (str);
}