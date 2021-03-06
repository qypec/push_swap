/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:55:01 by yquaro            #+#    #+#             */
/*   Updated: 2020/02/07 22:56:37 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void				stack_shift_down(t_psstk *stk)
{
	size_t				i;

	if (IS_EMPTY(stk))
		return ;
	i = stk->used_size - 1;
	while (i)
	{
		stk->num[i] = stk->num[i - 1];
		i--;
	}
}

void					reverse_rotate_a(t_stack *stack)
{
	size_t				i;
	size_t				tmp;

	if (IS_EMPTY(stack->a))
		return ;
	i = 0;
	tmp = stack->a->num[stack->a->used_size - 1];
	stack_shift_down(stack->a);
	stack->a->num[0] = tmp;
	add_operation(&(stack->operation), "rra");
}

void					reverse_rotate_b(t_stack *stack)
{
	size_t				i;
	size_t				tmp;

	if (IS_EMPTY(stack->b))
		return ;
	i = 0;
	tmp = stack->b->num[stack->b->used_size - 1];
	stack_shift_down(stack->b);
	stack->b->num[0] = tmp;
	add_operation(&(stack->operation), "rrb");
}

void					reverse_rotate_ab(t_stack *stack)
{
	reverse_rotate_a(stack);
	reverse_rotate_b(stack);
}
