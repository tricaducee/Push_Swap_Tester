/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:16:36 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 21:16:37 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	invalid_option(char *option)
{
	if (!*option)
		return (1);
	while (*option && *option != '=' && (*option > '9' || *option < '0'))
		option++;
	if (*option && *option == '=')
	{
		option++;
		if (!*option)
			return (1);
		while (*option && (*option <= '9' && *option >= '0'))
			option++;
	}
	if (!*option)
		return (0);
	return (1);
}
