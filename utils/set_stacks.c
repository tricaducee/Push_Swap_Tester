/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:44:40 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/11 07:38:54 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	set_stacks(t_stack *a, t_stack *b, unsigned int size)
{
	unsigned int	i;

	i = 0;
	a->real_size = size;
	a->current_size = size;
	a->unsorted_size = size;
	a->sorted_size = 0;
	a->cmds = 0;
	b->real_size = size;
	b->current_size = 0;
	b->unsorted_size = 0;
	b->sorted_size = 0;
	a->stack = malloc(size * sizeof(int));
	if (!a->stack)
		exit_error("#+rError#0 :#/r malloc failure#0\n");
	b->stack = malloc(size * sizeof(int));
	if (!b->stack)
		exit_error("#+rError#0 :#/r malloc failure#0\n");
}
