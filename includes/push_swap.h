/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:33:54 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/12/14 11:33:54 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX_INT 2147483647
# define MIN_INT -2147483648
# define SA 0
# define SB 1
# define SS 2
# define RA 3
# define RB 4
# define RR 5
# define RRA 6
# define RRB 7
# define RRR 8
# define PA 9
# define PB 10
# define TOP 11
# define BOT 12
# define MAX 13
# define MIN 14
# define ONECHUNK 3

# include <libft.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_stack
{
	int				content;
	int				flag;
	struct s_stack	*next;
}	t_stack;

typedef struct s_index
{
	t_stack	*target;
	t_stack	*next;
}	t_index;

void	error_end(void);
void	free_inputs(char **inputs);
void	free_all_error(char **inputs, t_stack **stack);
int		ft_atoi_ps(const char *str, char **inputs, t_stack **stack_a);
void	check_duplicates(t_stack *stack_a);
void	fill_stack(char **inputs, t_stack **stack_a);
void	check_inputs(char **inputs, t_stack **stack_a);
void	swap(t_stack **stack_a, t_stack **stack_b, int ab);
void	rotate(t_stack **stack_a, t_stack **stack_b, int ab);
void	r_rotate(t_stack **stack_a, t_stack **stack_b, int ab);
void	push(t_stack **stack_dst, t_stack **stack_src, int ab);
void	push_swap(t_stack **stack_a);
void	index_stack(t_stack **stack_a, int i);
int		ft_lstsize_stack(t_stack *lst);
void	ft_lstadd_back_stack(t_stack **lst, t_stack *new);
void	ft_lstadd_front_stack(t_stack **lst, t_stack *new);
void	ft_lstclear_stack(t_stack **lst);
t_stack	*ft_lstlast_stack(t_stack *lst);
t_stack	*ft_lstnew_stack(int content);
int		moves_top(t_stack *stack_a, int node);
int		moves_bot(t_stack *stack_a, int node);
void	push_back(t_stack **stack_a, t_stack **stack_b, int total_size);
void	small_size(t_stack **stack_a, t_stack **stack_b, int total_size);
int		check_top(t_stack *stack_a, int b_content);
int		check_bot(t_stack *stack_a, int b_content);
int		search_min(t_stack *stack_a, int b_content);
int		where_in_a(t_stack *stack_a, int b_content);

#endif