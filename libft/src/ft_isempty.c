/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isempty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 21:26:11 by yquaro            #+#    #+#             */
/*   Updated: 2019/07/25 17:38:35 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int							ft_isempty(const char *str)
{
	int						i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] != '\0')
			return (0);
		i++;
	}
	return (1);
}
