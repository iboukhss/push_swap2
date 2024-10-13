/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate_ops.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:47:36 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 01:47:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_internal.h"

#include <stdio.h>

void	rotate_a(t_stacks stacks)
{
	stack_rotate(stacks.a);
	puts("ra");
}

void	rotate_b(t_stacks stacks)
{
	stack_rotate(stacks.b);
	puts("rb");
}

void	rotate_both(t_stacks stacks)
{
	stack_rotate(stacks.a);
	stack_rotate(stacks.b);
	puts("rr");
}
