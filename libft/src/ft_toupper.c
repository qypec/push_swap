/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 23:40:17 by yquaro            #+#    #+#             */
/*   Updated: 2019/09/16 11:07:40 by yquaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
