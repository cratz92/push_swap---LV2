/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:37:33 by javferna          #+#    #+#             */
/*   Updated: 2021/12/14 12:22:47 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	index_stack(t_stack **stack_a, int i)
{
	t_index	aux;
	int		j;

	j = -1;
	while (++j < i)
	{
		aux.next = *stack_a;
		aux.target = NULL;
		while (aux.next)
		{
			if ((!aux.target || aux.next->content < aux.target->content)
				&& !aux.next->flag)
				aux.target = aux.next;
			aux.next = aux.next->next;
		}
		aux.target->content = j;
		aux.target->flag = 1;
	}
}
