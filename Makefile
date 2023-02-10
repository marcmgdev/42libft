# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmiro-go <mmiro-go@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 17:55:14 by mmiro-go          #+#    #+#              #
#    Updated: 2023/02/09 20:57:26 by mmiro-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror 
LIB				= ar -rcs 

INCS		= libft.h			
SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c \

BONUS			=	 ft_lstadd_back.c ft_lstadd_front.c \
					 ft_lstlast.c \
					 ft_lstnew.c ft_lstsize.c \

BONUS_OBJS		= $(BONUS:.c=.o)
OBJS			= $(SRCS:.c=.o)


$(NAME):		$(OBJS) $(INCS)
						$(LIB) $(NAME) $(OBJS)
						
all:				$(NAME)

bonus:			$(NAME) $(BONUS_OBJS)
						 $(LIB) $(NAME) $(BONUS_OBJS)

.c.o:			$(INCS)
						 $(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
			
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

rebonus:	fclean bonus

.PHONY:			all clean fclean re bonus rebonus




































