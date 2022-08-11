/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmpt_arg_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 06:02:04 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/11 09:28:33 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

unsigned int	cmpt_arg_check(char *arg)
{
	int	i;

	i = 0;
	while (arg && *arg)
	{
		while (*arg && *arg == ' ')
			arg++;
		if (!*arg)
			break ;
		if (*arg && (*arg == '-' || *arg == '+'))
			arg++;
		if (!*arg || (*arg > '9' || *arg < '0'))
			return (0);
		if (*arg && (*arg <= '9' && *arg >= '0'))
			i++;
		while (*arg && (*arg <= '9' && *arg >= '0'))
			arg++;
		if (*arg && *arg != ' ')
			return (0);
	}
	return (i);
}
