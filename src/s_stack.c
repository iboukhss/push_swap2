/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:59:46 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 17:44:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_stack.h"

#include <stdlib.h>

t_stack	*stack_new(ptrdiff_t capacity)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
	{
		return (NULL);
	}
	stack->head = NULL;
	stack->tail = NULL;
	stack->len = 0;
	stack->cap = capacity;
	return (stack);
}

void	stack_delete(t_stack *stack)
{
	free(stack);
}
