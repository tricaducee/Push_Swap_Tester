/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_option.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:06:53 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/08 21:06:53 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	plus_option(unsigned int *n, t_option *arg, unsigned int n_add)
{
	*n = n_add;
	arg->n_arg += 1;
	return (0);
}
