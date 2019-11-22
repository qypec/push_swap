/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 18:24:56 by yquaro            #+#    #+#             */
/*   Updated: 2019/11/23 01:06:49 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void					get_input(t_psstk *stack_a, int argc, char **argv)
{
	size_t				i;

	i = 0;
	while (i < argc - 1)
	{
		if (!ft_isdigit_str(argv[i + 1]))
		{
			ft_putendl(ERROR_MSG_BAD_NUMBER);
			exit(-1);
		}
		add_number_to_psstk(stack_a, i, ft_atoi(argv[i + 1]));
		i++;
	}
}
