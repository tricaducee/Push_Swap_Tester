# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 19:48:42 by hrolle            #+#    #+#              #
#    Updated: 2022/08/10 11:36:47 by hrolle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ECHO = @echo
PRINT = @printf
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
INVERT = \033[7m
RESETTXT = \033[0m
BOLD = \033[1m

RM = rm -rf

SRC = cmd/push.c					main/exec_cmd.c				options/pcso_multi_option.c			print_stacks_cmd/p_rotate.c		utils/arg_check.c		utils/int_ft_strlen.c			\
		cmd/reverse_rotate.c		main/sort_stack.c			options/plus_all_option.c			print_stacks_cmd/p_swap.c		utils/cmpt_arg_check.c	utils/set_stacks.c				\
		cmd/rotate.c				options/add_option.c		options/plus_option.c				print_stacks_cmd/print_stacks.c	utils/double_check.c	utils/simple_sort_check.c		\
		cmd/swap.c					options/check_option.c		options/set_option.c				print_stacks_cmd/wait_erase.c	utils/ft_atoi.c			utils/sorted_checker.c			\
		gnl/get_next_line.c			options/invalid_option.c	print_stacks_cmd/p_comment.c		secure/exit_error.c				utils/ft_satoi.c		utils/split_arg.c				\
		gnl/get_next_line_utils.c	options/option_cmp.c		print_stacks_cmd/p_push.c			secure/free_stacks.c			utils/ft_sleep.c		utils/strarray_to_nbrarray.c	\
		main/checker.c				options/option_to_i.c		print_stacks_cmd/p_reverse_rotate.c	secure/return_error.c			utils/ft_strcmp.c

OBJ = $(SRC:.c=.o)

NAME = checker

CC = gcc

CFLAGS = -Wall -Werror -Wextra

ifeq ($(DEBUG), debug)
	CFLAGS += -fsanitize=address -g3
endif

$(NAME) : $(OBJ)
	@make -C printfd
	$(ECHO) "$(YELLOW)Compilation de checker...$(RESETTXT)"
	@$(CC) $(CFLAGS) -o $@ printfd/libftprintfd.a $^
	$(ECHO) "$(GREEN)$(BOLD)Compilation Terminée !!!$(RESETTXT)"

%.o : %.c
	$(PRINT) "$(YELLOW)Generation des objets...$(RESETTXT)\r"
	@$(CC) $(CFLAGS) -o $@ -c $<

bonus : $(NAME)

all : $(NAME)

clean :
	@make clean -C printfd
	$(ECHO) "$(RED)Suppression des objets...$(RESETTXT)"
	@$(RM) $(OBJ)
	$(ECHO) "$(GREEN)$(BOLD)Terminé !$(RESETTXT)"

fclean : clean
	@$(RM) printfd/libftprintfd.a
	$(ECHO) "$(RED)Suppression de push_swap et libftprintfd.a...$(RESETTXT)"
	@$(RM) $(NAME)
	$(ECHO) "$(GREEN)$(BOLD)Terminé !$(RESETTXT)"

re : fclean all

.PHONY: all re bonus clean fclean