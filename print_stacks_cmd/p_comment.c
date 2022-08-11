/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_comment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:50:59 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 19:43:46 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	p_comment(t_stack *a, t_stack *b, t_option *arg, char *str)
{
	if (arg->stacks)
		ft_printfd(1, "#+g%-14.14s:#0\n", str);
	w_print_stacks(a, b, arg);
}

void	p_final_comment(t_stack *a, t_stack *b, t_option *arg, char *str)
{
	if (arg->stacks)
		ft_printfd(1, "#+g%-14.14s:#0\n", str);
	f_print_stacks(a, b, arg);
}
