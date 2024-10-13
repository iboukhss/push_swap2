/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:59:46 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 15:40:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_stack.h"

#include <stdlib.h>

// TODO: Handle allocation failure, handle negative capacity?

t_stack	*stack_new(ptrdiff_t capacity)
{
	t_node		*pool;
	t_stack		*stack;
	ptrdiff_t	i;

	pool = calloc(capacity, sizeof(t_node));
	i = 0;
	while (i < capacity - 1)
	{
		pool[i].next_free = &pool[i + 1];
		++i;
	}
	stack = malloc(sizeof(t_stack));
	stack->pool = pool;
	stack->head = NULL;
	stack->tail = NULL;
	stack->free_list = pool;
	stack->len = 0;
	stack->cap = capacity;
	return (stack);
}

void	stack_delete(t_stack *stack)
{
	free(stack->pool);
	free(stack);
}
