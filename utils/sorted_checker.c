/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:54:56 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/11 03:32:01 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/checker.h"

void	print_ok(t_option *arg)
{
	if (arg->min)
		ft_printfd(1, "#+g[OK]#0\n                    \n");
	else
	{
		ft_printfd(1, "#+g\n.OKOKOK.  OK .OK  \n");
		ft_printfd(1, "OK    OK  OK KO   \n");
		ft_printfd(1, "OK    OK  OKOK    \n");
		ft_printfd(1, "OK    OK  OKOKO   \n");
		ft_printfd(1, "OK    OK  OK  OK  \n");
		ft_printfd(1, "'OKOKOK'  OK   KO.#0\n\n");
	}
}

void	print_ko(t_option *arg)
{
	if (arg->min)
		ft_printfd(1, "#+r[KO]#0\n                    \n");
	else
	{
		ft_printfd(1, "#+r\nKO .KO    .KOKOKO.\n");
		ft_printfd(1, "KO OK     KO    KO\n");
		ft_printfd(1, "KOKO      KO    KO\n");
		ft_printfd(1, "KOKOK     KO    KO\n");
		ft_printfd(1, "KO  KO    KO    KO\n");
		ft_printfd(1, "KO   OK.  'KOKOKO'#0\n\n");
	}
}

int	sorted_checker(t_stack *a, t_stack *b, t_option *arg)
{
	unsigned int	i;

	i = 0;
	while (i < a->current_size - 1 || b->current_size)
	{
		if (b->current_size || a->stack[i] > a->stack[i + 1])
		{
			p_final_comment(a, b, arg, "FAIL");
			if (arg->percent)
				ft_printfd(1, "\r\033[A\033[A");
			print_ko(arg);
			return (0);
		}
		i++;
	}
	p_final_comment(a, b, arg, "SORTED");
	if (arg->percent)
		ft_printfd(1, "\r\033[A\033[A");
	print_ok(arg);
	return (1);
}
