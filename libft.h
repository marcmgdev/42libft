/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:29:15 by mmiro-go          #+#    #+#             */
/*   Updated: 2023/02/01 12:12:49 by mmiro-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>


int	ft_isalpha(int a);
int	ft_isdigit(int a);
int	ft_isascii(int a);
int	ft_isalnum(int a);
int	ft_isprint(int a);
int	ft_strlen(char *s);
int	ft_toupper(int a);
int	ft_tolower(int a);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_atoi(const char *str);

char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_calloc(size_t count, size_t size);

void	ft_bzero(void *s, size_t n);

size_t ft_strlcpy(char * dst, const char *src, size_t dstsize);
size_t ft_strlcat(char * dst, const char * src, size_t dstsize);


#endif
