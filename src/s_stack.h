/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_stack.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:52:20 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 19:38:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_STACK_H
# define S_STACK_H

# include <stdbool.h>
# include <stddef.h>

// Main stack implementation
// Files: src/s_ops.c src/s_queue_ops.c src/s_peek_ops.c src/s_extra_ops.c

typedef struct s_node	t_node;

struct s_node
{
	int		data;
	t_node	*prev;
	t_node	*next;
};

typedef struct s_stack
{
	t_node		*head;
	t_node		*tail;
	ptrdiff_t	len;
	ptrdiff_t	cap;
}	t_stack;

t_stack	*stack_new(ptrdiff_t capacity);
void	stack_delete(t_stack *stack);

t_node	*stack_pop_back(t_stack *stack);
t_node	*stack_pop_front(t_stack *stack);
void	stack_push_back(t_stack *stack, t_node *node);
void	stack_push_front(t_stack *stack, t_node *node);

void	stack_rotate(t_stack *stack);
void	stack_reverse_rotate(t_stack *stack);

void	stack_swap(t_stack *stack);

t_node	*stack_front(t_stack *stack);
t_node	*stack_back(t_stack *stack);

bool	stack_is_empty(t_stack *stack);
bool	stack_is_full(t_stack *stack);

#endif
