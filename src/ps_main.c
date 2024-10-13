/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:44:29 by iboukhss          #+#    #+#             */
/*   Updated: 2024/10/13 01:40:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_internal.h"
#include "ps_debug.h"

int	main(int argc, char **argv)
{
	t_stacks	st;
	int nums[10] = {4, 1, 9, 0, 3, 2, 5, 8, 7, 6};

	stacks_init(&st, nums, sizeof(nums) / sizeof(nums[0]));
	stacks_print(st);
	push_b(st);
	push_b(st);
	push_b(st);
	stacks_print(st);
	push_b(st);
	push_b(st);
	push_b(st);
	push_b(st);
	stacks_print(st);
	rotate_b(st);
	push_a(st);
	stacks_print(st);
	stacks_destroy(st);
	return (0);
}
