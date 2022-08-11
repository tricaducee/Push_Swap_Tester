/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_all_option.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:05:46 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 21:06:08 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	plus_all_option(t_option *arg)
{
	arg->stacks = 1;
	arg->percent = 1;
	arg->cmds = 1;
	arg->n_arg += 1;
	return (0);
}
