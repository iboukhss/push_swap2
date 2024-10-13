/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_debug.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:21:21 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 02:09:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_debug.h"

#include <stdio.h>

void	stacks_print(t_stacks stacks)
{
	t_node		*node_a;
	t_node		*node_b;
	ptrdiff_t	maxlen;
	ptrdiff_t	i;

	node_a = stacks.a->head;
	node_b = stacks.b->head;
	maxlen = (stacks.a->len > stacks.b->len) ? stacks.a->len : stacks.b->len;
	i = 0;
	printf("--------------------------------------------------------------------------------\n");
	while (i < maxlen)
	{
		if (i < stacks.a->len)
			printf("%3d   ", node_a->data);
		else
			printf("  .   ");
		if (i < stacks.b->len)
			printf("%3d\n", node_b->data);
		else
			printf("  .\n");
		node_a = node_a ? node_a->next : node_a;
		node_b = node_b ? node_b->next : node_b;
		++i;
	}
	printf("---   ---\n");
	printf(" a     b\n");
	printf("--------------------------------------------------------------------------------\n");
}
