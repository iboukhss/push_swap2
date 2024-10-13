/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:46:37 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 15:41:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_internal.h"

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
	int	val;

	if (!stack_is_empty(stacks.b) && !stack_is_full(stacks.a))
	{
		stack_front(&val, stacks.b);
		stack_pop_front(stacks.b);
		stack_push_front(stacks.a, val);
	}
	puts("pa");
}

void	push_b(t_stacks stacks)
{
	int	val;

	if (!stack_is_empty(stacks.a) && !stack_is_full(stacks.b))
	{
		stack_front(&val, stacks.a);
		stack_pop_front(stacks.a);
		stack_push_front(stacks.b, val);
	}
	puts("pb");
}
