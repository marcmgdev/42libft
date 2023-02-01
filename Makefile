# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 17:55:14 by mmiro-go          #+#    #+#              #
#    Updated: 2023/01/12 20:09:06 by mmiro-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat ft_toupper.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
COMPILED = *.o *.d
$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar -rc $(NAME) $(COMPILED)
	ranlib $(NAME)

clean: rm -f $(COMPILED)

fclean : rm -f $(COMPILED)

re: fclean all