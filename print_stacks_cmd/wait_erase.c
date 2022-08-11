/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_erase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:38:09 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 20:38:10 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	wait_erase(unsigned int lines, unsigned int time)
{
	unsigned int	i;

	i = 0;
	ft_sleep(time);
	ft_printfd(1, "\r");
	while (i < lines)
	{
		ft_printfd(1, "\033[A");
		i++;
	}
}
