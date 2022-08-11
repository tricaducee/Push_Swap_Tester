/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_option.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:03:59 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 21:04:03 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	add_option(char	*option, t_option *arg)
{
	if (invalid_option(option))
		return (1);
	if (option_cmp(option, "time=") || option_cmp(option, "t="))
		return (plus_option(&arg->time, arg, option_to_i(option)));
	else if (option_cmp(option, "len=") || option_cmp(option, "l="))
		return (plus_option(&arg->top, arg, option_to_i(option)));
	else if (option_cmp(option, "percent"))
		return (plus_option(&arg->percent, arg, 1));
	else if (option_cmp(option, "cmds"))
		return (plus_option(&arg->cmds, arg, 1));
	else if (option_cmp(option, "stacks"))
		return (plus_option(&arg->stacks, arg, 1));
	else if (option_cmp(option, "min"))
		return (plus_option(&arg->min, arg, 1));
	else if (*option == 'p' || *option == 'c'
		|| *option == 's' || *option == 'o' || *option == 'm')
		return (pcso_multi_option(option, arg));
	else if (option_cmp(option, "full") || option_cmp(option, "f"))
		return (plus_all_option(arg));
	return (1);
}
