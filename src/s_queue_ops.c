/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_queue_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:00:44 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 15:30:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_stack.h"

void	stack_push_back(t_stack *stack, int value)
{
	t_node	*node;

	if (stack_is_full(stack))
		return ;
	node = stack->free_list;
	node->data = value;
	stack->free_list = stack->free_list->next_free;
	if (stack_is_empty(stack))
	{
		stack->head = node;
		stack->tail = node;
		node->prev = node;
		node->next = node;
	}
	else
	{
		stack->tail->next = node;
		stack->head->prev = node;
		node->prev = stack->tail;
		node->next = stack->head;
		stack->tail = node;
	}
	stack->len += 1;
}

void	stack_pop_back(t_stack *stack)
{
	t_node	*node;

	if (stack_is_empty(stack))
		return ;
	node = stack->tail;
	if (stack->len == 1)
	{
		stack->head = NULL;
		stack->tail = NULL;
	}
	else
	{
		stack->tail = stack->tail->prev;
		stack->tail->next = stack->head;
		stack->head->prev = stack->tail;
	}
	node->data = 0;
	node->prev = NULL;
	node->next = NULL;
	node->next_free = stack->free_list;
	stack->free_list = node;
	stack->len -= 1;
}

void	stack_push_front(t_stack *stack, int value)
{
	t_node	*node;

	if (stack_is_full(stack))
		return ;
	node = stack->free_list;
	node->data = value;
	stack->free_list = stack->free_list->next_free;
	if (stack_is_empty(stack))
	{
		stack->head = node;
		stack->tail = node;
		node->prev = node;
		node->next = node;
	}
	else
	{
		stack->head->prev = node;
		stack->tail->next = node;
		node->prev = stack->tail;
		node->next = stack->head;
		stack->head = node;
	}
	stack->len += 1;
}

void	stack_pop_front(t_stack *stack)
{
	t_node	*node;

	if (stack_is_empty(stack))
		return ;
	node = stack->head;
	if (stack->len == 1)
	{
		stack->head = NULL;
		stack->tail = NULL;
	}
	else
	{
		stack->head = stack->head->next;
		stack->head->prev = stack->tail;
		stack->tail->next = stack->head;
	}
	node->data = 0;
	node->prev = NULL;
	node->next = NULL;
	node->next_free = stack->free_list;
	stack->free_list = node;
	stack->len -= 1;
}
