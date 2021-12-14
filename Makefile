# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 15:38:50 by cbrito-l          #+#    #+#              #
#    Updated: 2021/12/14 20:06:08 by cbrito-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = srcs/
INC_DIR = includes/
INC_LIBFT_DIR = libft/
UTILS_DIR = srcs/

SRC	= $(addprefix $(SRC_DIR),	\
		main.c					\
		parse.c					\
		index_stack.c			\
		find_moves.c			\
		final_moves.c			\
		small_numbers.c			\
		push_swap.c)

UTILS = $(addprefix $(UTILS_DIR),	\
		atoi.c						\
		exit_free.c					\
		swap.c						\
		rotate.c					\
		push.c						\
		small_checks.c				\
		list_stack.c				\
		list_stack_2.c)

OBJ = $(SRC:.c=.o)

OBJ_UTILS = $(UTILS:.c=.o)

CC = gcc

INC = $(INC_DIR) $(INC_LIBFT_DIR)

INC_PARAMS = $(INC:%=-I%)

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g $(INC_PARAMS)

LIBFT = Libft/libft.a

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_UTILS)
	$(MAKE) -C Libft
	$(CC) $(CFLAGS) $(OBJ) $(OBJ_UTILS) $(LIBFT) -o $(NAME)

clean:
	$(RM) $(OBJ) $(OBJ_UTILS)
	$(MAKE) -C Libft clean

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY = all clean fclean re