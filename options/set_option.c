/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_option.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:31:48 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 18:31:58 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	set_option(t_option *arg)
{
	arg->top = 50;
	arg->time = 0;
	arg->cmds = 0;
	arg->percent = 0;
	arg->stacks = 0;
	arg->n_arg = 0;
	arg->num_index = 1;
	arg->min = 0;
}
