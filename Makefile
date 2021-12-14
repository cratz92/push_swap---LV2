# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 15:38:50 by cbrito-l          #+#    #+#              #
#    Updated: 2021/12/14 21:28:23 by cbrito-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR = srcs/
INC_DIR = includes/
INC_LIBFT_DIR = libft/

SRCS	= $(addprefix $(SRCS_DIR),	\
		main.c					\
		parse.c					\
		index_stack.c			\
		find_moves.c			\
		final_moves.c			\
		small_numbers.c			\
		push_swap.c				\
		atoi.c					\
		exit_free.c				\
		swap.c					\
		rotate.c				\
		push.c					\
		small_checks.c			\
		list_stack.c			\
		list_stack_2.c)

OBJS = $(SRCS:.c=.o)

CC = gcc

INC = $(INC_DIR) $(INC_LIBFT_DIR)

INC_PARAMS = $(INC:%=-I%)

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g $(INC_PARAMS)

LIBFT = Libft/libft.a

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C Libft
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C Libft clean

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY = all clean fclean re
