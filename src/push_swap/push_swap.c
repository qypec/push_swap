/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:55:39 by yquaro            #+#    #+#             */
/*   Updated: 2019/12/22 08:22:24 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t					nulling_static_variable(size_t *transfered_size)
{
	size_t				transfer_tmp;

	transfer_tmp = *transfered_size;
	*transfered_size = 0;
	return (transfer_tmp);
}

void					print_operations(t_list *operation)
{
	if (operation == NULL) // delete
		ft_putchar('\n'); 
	while (operation != NULL)
	{
		ft_putendl((char *)(operation->content));
		operation = operation->next;
	}
}

int						main(int argc, char **argv)
{
	t_stack				*stack;

	stack = get_input(argc, argv);
	remove_self_destruction_operations(&(stack->operation));
	combine_operations(&(stack->operation));
	print_operations(stack->operation);

/* debugging */

	// dbg_print_stacks(stack);
	
/* */
	stack_delete(&stack);
}
