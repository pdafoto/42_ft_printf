# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 16:53:24 by nperez-d          #+#    #+#              #
#    Updated: 2024/10/02 17:01:24 by nperez-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libftprintf.a

SRCS		:= ft_printf.c ft_printf_wrtutils.c ft_printf_nbrutils.c

OBJS		:= $(SRCS:.c=.o)

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror

RM			:= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
