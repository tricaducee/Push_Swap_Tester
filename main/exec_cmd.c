/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:21:00 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/10 08:50:29 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

int	exec_cmd(t_stack *a, t_stack *b, t_option *arg, char *cmd)
{
	if (ft_strcmp(cmd, "sa\n"))
		return (p_sa(a, b, arg));
	else if (ft_strcmp(cmd, "sb\n"))
		return (p_sb(a, b, arg));
	else if (ft_strcmp(cmd, "ss\n"))
		return (p_ss(a, b, arg));
	else if (ft_strcmp(cmd, "pa\n"))
		return (p_pa(a, b, arg));
	else if (ft_strcmp(cmd, "pb\n"))
		return (p_pb(a, b, arg));
	else if (ft_strcmp(cmd, "ra\n"))
		return (p_ra(a, b, arg));
	else if (ft_strcmp(cmd, "rb\n"))
		return (p_rb(a, b, arg));
	else if (ft_strcmp(cmd, "rr\n"))
		return (p_rr(a, b, arg));
	else if (ft_strcmp(cmd, "rra\n"))
		return (p_rra(a, b, arg));
	else if (ft_strcmp(cmd, "rrb\n"))
		return (p_rrb(a, b, arg));
	else if (ft_strcmp(cmd, "rrr\n"))
		return (p_rrr(a, b, arg));
	else
		return (1);
}
