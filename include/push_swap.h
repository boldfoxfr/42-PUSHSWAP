/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:16:30 by agondard          #+#    #+#             */
/*   Updated: 2022/03/25 15:23:35 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# define SUCCESS 1
# define FAILURE 0

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
#include "../libft/libft.h"


typedef struct s_data
{
	int	min;
	int	mid;
	int	max;
	int	size_tab;
	int	size_tab_a;
	int	size_tab_b;
}				t_data;

/****** MAIN ******/
void	print_tab(int *tab, t_data *data);
void	print_tab_int(long int *tab, t_data *data);

/******  INITIALISATION && FREE ******/
void		init_struct(t_data *data);
char		**init_tab(int ac, char **av);

/******  ERRORS ******/
int			check_doublon(long int *tab, t_data *data);
int			str_is_num(char *str);
int			check_arg(char **av, char **tab_str, int ac);

/******  ALGO ******/
int			*long_to_int(long int *a, t_data *data);
int			find_min(int *a, t_data *data);
void		algo_choice(long int *a, t_data *data);

/******  MOVE ******/
/* MOVE A */
int			swap_a(int *a, t_data *data);
int			rotate_a(int *a, t_data *data);
int			reverse_rotate_a(int *a, t_data *data);
void		push_a(int *a, int *b, t_data *data);

/* MOVE B */
int			swap_b(int *b, t_data *data);
int			rotate_b(int *b, t_data *data);
int			reverse_rotate_b(int *b, t_data *data);
void		push_b(int *a, int *b, t_data *data);

/* MOVE BOTH */
int			swap_both(int *a, int *b, t_data *data);
int			rotate_both(int *a, int *b, t_data *data);
int			reverse_rotate_both(int *a, int *b, t_data *data);

/******  UTILS ******/
int			tab_len(char **tab);
long int	*atoi_tab(char **av, t_data *data);
void		free_all(char **tab_str, long int *tab_int);


#endif
