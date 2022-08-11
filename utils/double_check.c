/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:52:37 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/11 07:50:15 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	double_check(t_stack *a, t_stack *b)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < a->current_size - 1)
	{
		j = i + 1;
		while (j < a->current_size)
		{
			if (a->stack[i] == a->stack[j++])
			{
				free(a->stack);
				free(b->stack);
				exit_error("#+rError#0 :#/r same number repeated#0\n");
			}
		}
		i++;
	}
}
