# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 16:53:24 by nperez-d          #+#    #+#              #
#    Updated: 2024/10/02 17:25:38 by nperez-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS		= src/ft_printf.c src/ft_printf_wrtutils.c src/ft_printf_nbrutils.c

INC			= includes/ft_printf.h

OBJS		= $(SRCS:.c=.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I

RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
