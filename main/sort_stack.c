/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:16:40 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/11 07:42:37 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	sort_stack(t_stack *a, t_stack *b, t_option *arg)
{
	char		*cmd;

	ft_printfd(1, "\033[?25l");
	p_comment(a, b, arg, "STACKS");
	cmd = get_next_line(STDIN_FILENO);
	while (cmd)
	{
		if (exec_cmd(a, b, arg, cmd))
		{
			free(cmd);
			stacks_free(a, b);
			exit_error("#+r[KO]#0 : #/rInvalid command\n#0");
		}
		free(cmd);
		cmd = get_next_line(STDIN_FILENO);
	}
	sorted_checker(a, b, arg);
	ft_printfd(1, "\033[?25h");
}
