/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pcso_multi_option.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:12:01 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 21:12:17 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	pcso_multi_option(char *option, t_option *arg)
{
	arg->n_arg += 1;
	while (*option)
	{
		if (*option == 'p')
			arg->percent = 1;
		else if (*option == 'c')
			arg->cmds = 1;
		else if (*option == 's')
			arg->stacks = 1;
		else if (*option == 'm')
			arg->min = 1;
		else
			return (1);
		option++;
	}
	return (0);
}
