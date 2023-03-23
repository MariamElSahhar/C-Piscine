# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 11:15:16 by melsahha          #+#    #+#              #
#    Updated: 2022/10/05 13:56:44 by melsahha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

do-op:
	@(gcc -Wall -Wextra -Werror main.c helper_funcs.c math_funcs.c -o do-op)

all: do-op

clean:
	@(rm -f do-op)

fclean: clean

re: fclean all

.PHONY: clean all fclean re
