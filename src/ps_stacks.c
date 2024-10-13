/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 22:22:03 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 15:40:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_internal.h"

// TODO: Handle allocation failure.

int	stacks_init(t_stacks *stacks, int *arr, ptrdiff_t arrlen)
{
	t_stack		*sta;
	t_stack		*stb;
	ptrdiff_t	i;

	sta = stack_new(arrlen);
	stb = stack_new(arrlen);
	i = 0;
	while (i < arrlen)
	{
		stack_push_back(sta, arr[i]);
		++i;
	}
	stacks->a = sta;
	stacks->b = stb;
	return (0);
}

void	stacks_destroy(t_stacks stacks)
{
	stack_delete(stacks.a);
	stack_delete(stacks.b);
}
