/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:46:37 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 17:36:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_internal.h"
#include "s_stack.h"

#include <stdio.h>

// NOTE: These functions should never segfault and I am 99% sure they don't.
// TODO: Maybe write some tests?

void	swap_a(t_stacks stacks)
{
	stack_swap(stacks.a);
	puts("sa");
}

void	swap_b(t_stacks stacks)
{
	stack_swap(stacks.b);
	puts("sb");
}

void	swap_both(t_stacks stacks)
{
	stack_swap(stacks.a);
	stack_swap(stacks.b);
	puts("ss");
}

void	push_a(t_stacks stacks)
{
	t_node	*node;

	node = stack_pop_front(stacks.b);
	stack_push_front(stacks.a, node);
	puts("pa");
}

void	push_b(t_stacks stacks)
{
	t_node	*node;

	node = stack_pop_front(stacks.a);
	stack_push_front(stacks.b, node);
	puts("pb");
}
