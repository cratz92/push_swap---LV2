/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:53:11 by javferna          #+#    #+#             */
/*   Updated: 2021/12/14 12:20:47 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	fm_top(t_stack *stack_b, int max)
{
	int	top;

	top = 0;
	while (stack_b->content != max)
	{
		stack_b = stack_b->next;
		top++;
	}
	return (top);
}

static int	fm_bot(t_stack *stack_b, int max)
{
	t_stack	*aux;
	t_stack	*rev;
	int		bot;

	bot = 1;
	rev = ft_lstlast_stack(stack_b);
	while (rev->content != max)
	{
		aux = stack_b;
		while (aux->next->content != rev->content)
			aux = aux->next;
		rev = aux;
		bot++;
	}
	return (bot);
}

void	push_back(t_stack **stack_a, t_stack **stack_b, int total_size)
{
	int	top;
	int	bot;

	total_size -= 1;
	while (*stack_b)
	{
		top = fm_top(*stack_b, total_size);
		bot = fm_bot(*stack_b, total_size);
		if (top <= bot)
		{
			while (top-- > 0)
				rotate(NULL, stack_b, RB);
		}
		else
		{
			while (bot-- > 0)
				r_rotate(NULL, stack_b, RRB);
		}
		push(stack_a, stack_b, PA);
		total_size--;
	}
}
