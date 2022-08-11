/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:41:06 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/09 00:51:24 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	push(t_stack *a, t_stack *b)
{
	unsigned int	i;

	if (!a->current_size)
		return ;
	if (b->current_size < a->real_size)
		i = b->current_size;
	else
		i = b->current_size - 1;
	while (i)
	{
		i--;
		b->stack[i + 1] = b->stack[i];
	}
	b->stack[0] = a->stack[0];
	b->current_size += 1;
	i = 0;
	while (i < a->current_size && i < a->real_size - 1)
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
	a->current_size -= 1;
}

void	pb(t_stack *a, t_stack *b)
{
	push(a, b);
	a->unsorted_size -= 1;
	write(1, "pb\n", 3);
}

void	pa(t_stack *b, t_stack *a)
{
	push(b, a);
	write(1, "pa\n", 3);
}
