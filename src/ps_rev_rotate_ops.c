/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rev_rotate_ops.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:48:37 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 01:48:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_internal.h"

#include <stdio.h>

void	reverse_rotate_a(t_stacks stacks)
{
	stack_reverse_rotate(stacks.a);
	puts("rra");
}

void	reverse_rotate_b(t_stacks stacks)
{
	stack_reverse_rotate(stacks.b);
	puts("rrb");
}

void	reverse_rotate_both(t_stacks stacks)
{
	stack_reverse_rotate(stacks.a);
	puts("rrr");
}
