/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:41:30 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 18:10:47 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	swap(t_stack *nb)
{
	int	tmp;

	if (nb->current_size < 2)
		return ;
	tmp = nb->stack[0];
	nb->stack[0] = nb->stack[1];
	nb->stack[1] = tmp;
}

void	sa(t_stack *a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
