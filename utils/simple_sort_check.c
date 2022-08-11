/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:26:00 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/10 08:51:10 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	simple_sort_check(t_stack *a, t_stack *b)
{
	unsigned int	i;

	i = 0;
	if (b->current_size)
		return (0);
	while (i < a->current_size - 1)
	{
		if (a->stack[i] > a->stack[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
