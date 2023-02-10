/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:11:56 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/09 17:27:24 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	next_delimiter(char const *str, char c, int i)
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	next_word(char const *str, char c, int i)
{
	while (str[i] && str[i] == c)
		i++;
	return (i);
}

static int	count_words(const char *str, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			words ++;
			i = next_delimiter(str, c, i);
		}
		else
			i++;
	}
	return (words);
}

static char	**free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char	**res;
	int		wrds;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	wrds = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (wrds + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < wrds)
	{
		i = next_word(str, c, i);
		res[j] = ft_substr(str, i, next_delimiter(str, c, i) - i);
		if (!res[j])
			return (free_split(res));
		i = next_delimiter(str, c, i);
		j ++;
	}
	res[j] = NULL;
	return (res);
}
