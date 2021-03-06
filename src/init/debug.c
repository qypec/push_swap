/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:29:28 by yquaro            #+#    #+#             */
/*   Updated: 2019/12/25 15:26:58 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void					dbg_print_stack(t_psstk *stk)
{
	size_t				i;

	i = 0;
	while (i < stk->size)
	{
		ft_printf("[%zu] %zu\n", i, stk->num[i]);
		i++;
	}
}

void					dbg_print_stacks(t_stack *stack)
{
	ft_printf("\nstack_a:\n");
	dbg_print_stack(stack->a);
	ft_printf("\nstack_b:\n");
	dbg_print_stack(stack->b);
}
