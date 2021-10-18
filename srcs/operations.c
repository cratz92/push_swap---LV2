/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:26:30 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/10/17 19:26:30 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void swap_stack(t_element **stack)
{
	t_element *first_nbr;
	t_element *second_nbr;

	first_nbr = *stack;
	if (!first_nbr || !first_nbr->next)
		return;
	second_nbr = first_nbr->next;
	*stack = second_nbr;
	first_nbr->next = second_nbr->next;
	second_nbr->next = first_nbr;
}

void push_stack(t_element **dest_stack, t_element **src_stack)
{
	t_element *temp;

	temp = *src_stack;
	if (!temp)
		return;
	*src_stack = temp->next;
	temp->next = 0;
	ft_lstadd_front(dest_stack, temp);
}

void rotate_stack(t_element **stack)
{
	t_element *temp;

	temp = *stack;
	if (!temp)
		return;
	*stack = temp->next;
	temp->next = 0;
	ft_lstadd_back(stack, temp);
}

void rev_rotate_stack(t_element **stack)
{
	t_element *temp;
	t_element *last_nbr;

	temp = *stack;
	if (!temp || !temp->next)
		return;
	while (temp->next)
	{
		last_nbr = temp->next;
		if (last_nbr->next == 0)
			break;
		temp = temp->next;
	}
	temp->next = 0;
	ft_lstadd_front(stack, last_nbr);
}
