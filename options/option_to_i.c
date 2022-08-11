/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_to_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:13:26 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 21:13:48 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

unsigned int	option_to_i(char *str)
{
	unsigned int	nbr;

	nbr = 0;
	while (*str && (*str > '9' || *str < '0'))
		str++;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + (*(str++) - '0');
	return (nbr);
}
