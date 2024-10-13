/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_extra_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:03:17 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 02:03:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_stack.h"

void	stack_rotate(t_stack *stack)
{
	if (stack->len < 2)
		return ;
	stack->head = stack->head->next;
	stack->tail = stack->tail->next;
}

void	stack_reverse_rotate(t_stack *stack)
{
	if (stack->len < 2)
		return ;
	stack->head = stack->head->prev;
	stack->tail = stack->tail->prev;
}

void	stack_swap(t_stack *stack)
{
	int	tmp;

	if (stack->len < 2)
		return ;
	tmp = stack->head->data;
	stack->head->data = stack->head->next->data;
	stack->head->next->data = tmp;
}
