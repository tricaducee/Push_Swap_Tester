/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:41:23 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 18:10:29 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	rotate(t_stack *nb)
{
	unsigned int	i;
	int				tmp;

	if (nb->current_size < 2)
		return ;
	i = 0;
	tmp = nb->stack[0];
	while (i < nb->current_size - 1)
	{
		nb->stack[i] = nb->stack[i + 1];
		i++;
	}
	nb->stack[i] = tmp;
}

void	ra(t_stack *a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
