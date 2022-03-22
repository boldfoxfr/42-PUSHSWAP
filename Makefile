# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agondard <agondard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/01 13:16:58 by agondard          #+#    #+#              #
#    Updated: 2022/03/22 07:00:40 by agondard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap

HEADER_PATH = ./include/

CFLAGS = -Wall -Wextra -Werror -g -I $(HEADER_PATH) -I ./libft/
RM = rm -f

SRCS_PATH = ./srcs/

SRCS = 1_main.c \
		2_init_and_free.c \
		3_errors.c \
		4_algo.c \
		5_move_a \
		6_move_b \
		7_move_both\
		utils.c \

SRCS_BASENAME = $(addprefix $(SRCS_PATH), $(SRCS))

OBJS = 	$(SRCS_BASENAME:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS) $(HEADER_PATH)
			make -C ./libft
			gcc -o $(NAME) $(CFLAGS) $(OBJS) -L ./libft -lft

clean:
	make clean -C ./libft/
	rm -fr $(OBJS)

fclean:
	make clean
	make fclean -C ./libft/
	rm -fr $(NAME)

re: fclean all

.PHONY : re clean fclean
