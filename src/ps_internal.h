/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_internal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:46:09 by iboukhss          #+#    #+#             */
/*   Updated: 2024/10/13 01:58:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_INTERNAL_H
# define PS_INTERNAL_H

# include "s_stack.h"

// For ease of use in functions
typedef struct s_stacks
{
	t_stack	*a;
	t_stack	*b;
}	t_stacks;

// Constructor and destructor
int		stacks_init(t_stacks *stacks, int *arr, ptrdiff_t arrlen);
void	stacks_destroy(t_stacks stacks);

// Push_swap operations
void	swap_a(t_stacks stacks);
void	swap_b(t_stacks stacks);
void	swap_both(t_stacks stacks);

void	push_a(t_stacks stacks);
void	push_b(t_stacks stacks);

void	rotate_a(t_stacks stacks);
void	rotate_b(t_stacks stacks);
void	rotate_both(t_stacks stacks);

void	reverse_rotate_a(t_stacks stacks);
void	reverse_rotate_b(t_stacks stacks);
void	reverse_rotate_both(t_stacks stacks);

#endif
