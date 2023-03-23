# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:21:55 by melsahha          #+#    #+#              #
#    Updated: 2022/10/04 13:27:04 by melsahha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCFILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SRCS = ${addprefix ./srcs/, ${SRCFILES}}

OBJS = ${SRCS:.c=.o}

all: libft.a

.c.o:
	cc -c -Wall -Werror -Wextra -I ./includes/ $< -o ${<:.c=.o}

libft.a: ${OBJS}
	ar -rc libft.a ${OBJS}
	ranlib libft.a

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: clean re fclean all
