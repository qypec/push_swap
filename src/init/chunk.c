/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 15:59:20 by yquaro            #+#    #+#             */
/*   Updated: 2020/02/07 22:42:57 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define CHUNK_SIZE (STACK_SIZE / NUM_OF_CHUNKS)
#define REMAINING_SIZE (STACK_SIZE - CHUNK_SIZE * (NUM_OF_CHUNKS - 1))

void				chunk_init(t_stack *stack)
{
	if ((stack->chunk = (t_chunk *)malloc(sizeof(t_chunk) * \
			NUM_OF_CHUNKS)) == NULL)
		exit(-1);
	stack->chunk[0].size = CHUNK_SIZE;
	stack->chunk[0].fixed_item = 1;
	stack->chunk[1].size = CHUNK_SIZE;
	stack->chunk[1].fixed_item = CHUNK_SIZE + (CHUNK_SIZE / 2);
	stack->chunk[2].size = REMAINING_SIZE;
	stack->chunk[2].fixed_item = STACK_SIZE;
}
