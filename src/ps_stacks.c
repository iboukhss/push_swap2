/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 22:22:03 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 19:47:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_internal.h"

#include <stdlib.h>

// TODO: Handle alloc failure?

int	stacks_init(t_stacks *stacks, int *arr, ptrdiff_t arrlen)
{
	t_node		*pool;
	t_stack		*stack_a;
	t_stack		*stack_b;
	ptrdiff_t	i;

	pool = calloc(arrlen, sizeof(t_node));
	stack_a = stack_new(arrlen);
	stack_b = stack_new(arrlen);
	i = 0;
	while (i < arrlen)
	{
		pool[i].data = arr[i];
		stack_push_back(stack_a, &pool[i]);
		++i;
	}
	stacks->pool = pool;
	stacks->a = stack_a;
	stacks->b = stack_b;
	return (0);
}

void	stacks_destroy(t_stacks stacks)
{
	free(stacks.pool);
	stack_delete(stacks.a);
	stack_delete(stacks.b);
}
