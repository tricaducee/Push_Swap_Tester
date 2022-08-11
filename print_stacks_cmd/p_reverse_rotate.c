/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_reverse_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:41:26 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/10 01:53:29 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	p_rra(t_stack *a, t_stack *b, t_option *arg)
{
	a->cmds += 1;
	reverse_rotate(a);
	if (arg->stacks)
		ft_printfd(1, "#+gRRA           :#0\n");
	w_print_stacks(a, b, arg);
	return (0);
}

int	p_rrb(t_stack *a, t_stack *b, t_option *arg)
{
	a->cmds += 1;
	reverse_rotate(b);
	if (arg->stacks)
		ft_printfd(1, "#+gRRB           :#0\n");
	w_print_stacks(a, b, arg);
	return (0);
}

int	p_rrr(t_stack *a, t_stack *b, t_option *arg)
{
	a->cmds += 1;
	reverse_rotate(a);
	reverse_rotate(b);
	if (arg->stacks)
		ft_printfd(1, "#+gRRR           :#0\n");
	w_print_stacks(a, b, arg);
	return (0);
}
