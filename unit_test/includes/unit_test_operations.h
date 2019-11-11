#ifndef UNIT_TEST_OPERATIONS_H
# define UNIT_TEST_OPERATIONS_H

# include "../../libft/includes/libft.h"
# include "../../includes/push_swap.h"

# define SWAP_A swap_a
# define SWAP_B swap_b
# define SWAP_AB swap_ab
# define PUSH_A push_a
# define PUSH_B push_b
# define ROTATE_A rotate_a
# define ROTATE_B rotate_b
# define ROTATE_AB rotate_ab

void				create_stacks(t_psstk *stack_a, t_psstk *stack_b, \
						const char *a, const char *b);
int					compare_this(t_psstk *stack, \
						const char *expected_result, const char *operation);

void				check_swap_operations(void);

#endif