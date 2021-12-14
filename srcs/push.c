/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:03:01 by javferna          #+#    #+#             */
/*   Updated: 2021/12/14 12:51:04 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_stack **stack_dst, t_stack **stack_src, int ab)
{
	t_stack	*aux;

	if (!*stack_src)
		return ;
	aux = *stack_src;
	if (!*stack_dst)
		*stack_dst = ft_lstnew_stack((*stack_src)->content);
	else
		ft_lstadd_front_stack(stack_dst,
			ft_lstnew_stack((*stack_src)->content));
	*stack_src = (*stack_src)->next;
	free(aux);
	if (ab == PA)
		write(1, "pa\n", 3);
	if (ab == PB)
		write(1, "pb\n", 3);
}
