# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: celal <celal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 17:12:40 by hugozlu           #+#    #+#              #
#    Updated: 2025/06/16 16:39:54 by celal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
OBJ_DIR = obj/
SRC_DIR = srcs/

SRC = 	main.c reading_input.c stack_about.c solver_utils_ab.c solver_utils_ba.c ft_rotate_and_push.c \
		rules_a.c rules_b.c lst_utils_2.c ft_sort_big.c ft_sort_three.c ft_rotate_type.c \

OBJ = ${SRC:.c=.o}

INCLUDE = -L ./libft -lft

${NAME}: ${OBJ}
	make -C $(LIBFTDIR)
	${CC} ${OBJ} -o ${NAME} ${INCLUDE}

all: ${NAME} 

clean:
	${RM} ${OBJ}
	cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all
