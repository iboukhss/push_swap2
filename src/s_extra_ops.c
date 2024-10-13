/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_extra_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:03:17 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 17:30:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_stack.h"

void	stack_rotate(t_stack *stack)
{
	t_node	*node;

	node = stack_pop_front(stack);
	stack_push_back(stack, node);
}

void	stack_reverse_rotate(t_stack *stack)
{
	t_node	*node;

	node = stack_pop_back(stack);
	stack_push_front(stack, node);
}

void	stack_swap(t_stack *stack)
{
	t_node	*node_a;
	t_node	*node_b;

	node_a = stack_pop_front(stack);
	node_b = stack_pop_front(stack);
	stack_push_front(stack, node_a);
	stack_push_front(stack, node_b);
}
