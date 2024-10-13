/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_peek_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:01:46 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 15:33:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_stack.h"

bool	stack_is_empty(t_stack *stack)
{
	return (stack->len == 0);
}

bool	stack_is_full(t_stack *stack)
{
	return (stack->len == stack->cap);
}

int	stack_front(int *outval, t_stack *stack)
{
	if (stack_is_empty(stack))
	{
		return (1);
	}
	*outval = stack->head->data;
	return (0);
}

int	stack_back(int *outval, t_stack *stack)
{
	if (stack_is_empty(stack))
	{
		return (1);
	}
	*outval = stack->tail->data;
	return (0);
}
