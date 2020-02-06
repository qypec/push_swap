/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:41:30 by yquaro            #+#    #+#             */
/*   Updated: 2020/02/06 18:05:25 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "visu.h"

void					draw(t_stack *stack, const char *operation)
{
	draw_stacks(stack);
	draw_operation(stack, operation);
	draw_help(stack->visu);
	handle_buttons(stack);
}
