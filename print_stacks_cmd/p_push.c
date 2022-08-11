/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_push.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:41:23 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/10 01:53:07 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	p_pb(t_stack *a, t_stack *b, t_option *arg)
{
	a->cmds += 1;
	push(a, b);
	if (arg->stacks)
		ft_printfd(1, "#+gPB            :#0\n");
	w_print_stacks(a, b, arg);
	return (0);
}

int	p_pa(t_stack *a, t_stack *b, t_option *arg)
{
	a->cmds += 1;
	push(b, a);
	a->sorted_size += 1;
	a->unsorted_size -= 1;
	if (arg->stacks)
		ft_printfd(1, "#+gPA            :#0\n");
	w_print_stacks(a, b, arg);
	return (0);
}
