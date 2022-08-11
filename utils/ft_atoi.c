/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:59:39 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 18:31:02 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	ft_atoi(const char *str)
{
	int				pn;
	unsigned int	nbr;
	int				i;

	pn = 1;
	nbr = 0;
	i = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
		if (*(str++) == '-')
			pn *= -1;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*(str++) - '0');
		i++;
	}
	if (i > 10)
	{
		if (pn < 0)
			return (0);
		else
			return (-1);
	}
	return ((int)nbr * pn);
}
