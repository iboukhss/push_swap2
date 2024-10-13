/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_peek_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:01:46 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 15:55:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_stack.h"

t_node	*stack_front(t_stack *stack)
{
	return (stack->head);
}

t_node	*stack_back(t_stack *stack)
{
	return (stack->tail);
}

bool	stack_is_empty(t_stack *stack)
{
	return (stack->len == 0);
}

bool	stack_is_full(t_stack *stack)
{
	return (stack->len == stack->cap);
}
