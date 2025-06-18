# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugozlu <hugozlu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/18 09:03:01 by hugozlu           #+#    #+#              #
#    Updated: 2025/06/18 16:40:07 by hugozlu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
OBJ_DIR = obj/
SRC_DIR = srcs/

SRC = 	main.c reading_input.c stack_about.c test_ab.c test_ba.c apply_push.c \
		rules_a.c rules_b.c finder_position.c sort.c case.c \

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
