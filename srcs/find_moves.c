/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:20:58 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/12/14 12:20:58 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	moves_top(t_stack *stack_a, int node)
{
	int	atop;

	if (!stack_a->next)
		return (0);
	atop = 0;
	while (stack_a->content >= node)
	{
		stack_a = stack_a->next;
		atop++;
	}
	return (atop);
}

int	moves_bot(t_stack *stack_a, int node)
{
	t_stack	*aux;
	t_stack	*rev;
	int		abot;

	if (!stack_a->next)
		return (0);
	rev = ft_lstlast_stack(stack_a);
	abot = 1;
	while (rev->content >= node)
	{
		aux = stack_a;
		while (aux->next->content != rev->content)
			aux = aux->next;
		rev = aux;
		abot++;
	}
	return (abot);
}
