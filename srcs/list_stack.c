/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:37:10 by javferna          #+#    #+#             */
/*   Updated: 2021/12/14 11:52:36 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_lstadd_back_stack(t_stack **lst, t_stack *new)
{
	if (!lst)
		return ;
	if (*lst)
		(ft_lstlast_stack(*lst))->next = new;
	else
		*lst = new;
}

void	ft_lstadd_front_stack(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_lstclear_stack(t_stack **lst)
{
	t_stack	*aux;

	if (!lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		free(*lst);
		*lst = aux;
	}
}

t_stack	*ft_lstlast_stack(t_stack *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

t_stack	*ft_lstnew_stack(int content)
{
	t_stack	*lst;

	lst = malloc(sizeof(t_stack));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->flag = 0;
	lst->next = NULL;
	return (lst);
}
