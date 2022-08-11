/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:47:26 by hrolle            #+#    #+#             */
/*   Updated: 2022/08/10 08:23:38 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# define TIME	250
# define YES_NO	1
# define TOP	50
# include "get_next_line.h"
# include "../printfd/HEADER/ft_printfd.h"

typedef struct S_stack
{
	int				*stack;
	unsigned int	real_size;
	unsigned int	current_size;
	unsigned int	unsorted_size;
	unsigned int	sorted_size;
	unsigned int	cmds;
}					t_stack;

typedef struct S_option
{
	unsigned int	top;
	unsigned int	time;
	unsigned int	cmds;
	unsigned int	percent;
	unsigned int	stacks;
	unsigned int	n_arg;
	unsigned int	num_index;
	unsigned int	min;
}					t_option;

/*----------------MAIN----------------*/

int				main(int ac, char **av);
int				exec_cmd(t_stack *a, t_stack *b, t_option *arg, char *cmd);
void			sort_stack(t_stack *a, t_stack *b, t_option *arg);

/*----------------CMD-----------------*/

void			pb(t_stack *a, t_stack *b);
void			push(t_stack *a, t_stack *b);
void			pa(t_stack *b, t_stack *a);
void			rotate(t_stack *nb);
void			ra(t_stack *a);
void			rb(t_stack *b);
void			rr(t_stack *a, t_stack *b);
void			reverse_rotate(t_stack *nb);
void			rra(t_stack *a);
void			rrb(t_stack *b);
void			rrr(t_stack *a, t_stack *b);
void			swap(t_stack *nb);
void			sa(t_stack *a);
void			sb(t_stack *b);
void			ss(t_stack *a, t_stack *b);

/*---------------UTILS----------------*/

void			set_stacks(t_stack *a, t_stack *b, unsigned int size);
int				arg_check(char **av);
void			double_check(t_stack *a, t_stack *b);
int				ft_atoi(const char *str);
int				ft_satoi(const char *str, t_stack *a, t_stack *b);
int				ft_strcmp(char *s1, char *s2);
int				sorted_checker(t_stack *a, t_stack *b, t_option *arg);
int				simple_sort_check(t_stack *a, t_stack *b);
unsigned int	cmpt_arg_check(char *av);
void			split_arg(t_stack *a, t_stack *b, char *arg);
void			strarray_to_nbrarray(t_stack *a, t_stack *b, char **av);
void			ft_sleep(unsigned int time);

/*---------------PRINT----------------*/

void			wait_erase(unsigned int lines, unsigned int time);
void			print_stacks(t_stack *a, t_stack *b, unsigned int size);
void			w_print_stacks(t_stack *a, t_stack *b, t_option *arg);
void			f_print_stacks(t_stack *a, t_stack *b, t_option *arg);
int				p_pb(t_stack *a, t_stack *b, t_option *arg);
int				p_pa(t_stack *a, t_stack *b, t_option *arg);
int				p_rra(t_stack *a, t_stack *b, t_option *arg);
int				p_rrb(t_stack *a, t_stack *b, t_option *arg);
int				p_rrr(t_stack *a, t_stack *b, t_option *arg);
int				p_ra(t_stack *a, t_stack *b, t_option *arg);
int				p_rb(t_stack *a, t_stack *b, t_option *arg);
int				p_rr(t_stack *a, t_stack *b, t_option *arg);
int				p_sa(t_stack *a, t_stack *b, t_option *arg);
int				p_sb(t_stack *a, t_stack *b, t_option *arg);
int				p_ss(t_stack *a, t_stack *b, t_option *arg);
void			p_comment(t_stack *a, t_stack *b, t_option *arg, char *str);
void			p_final_comment(t_stack *a, t_stack *b,
					t_option *arg, char *str);

/*--------------OPTIONS---------------*/

void			set_option(t_option *arg);
char			*check_option(char **av, t_option *arg);
int				add_option(char	*option, t_option *arg);
int				plus_all_option(t_option *arg);
int				plus_option(unsigned int *n, t_option *arg, unsigned int n_add);
int				pcso_multi_option(char *option, t_option *arg);
unsigned int	option_to_i(char *str);
int				invalid_option(char *option);
int				option_cmp(char *a, char *b);

/*---------------SECURE---------------*/

void			exit_error(char *str);
int				return_error(char *str, int ernum);
int				stacks_free(t_stack *a, t_stack *b);

#endif
