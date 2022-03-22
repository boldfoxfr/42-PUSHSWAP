/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:16:30 by agondard          #+#    #+#             */
/*   Updated: 2022/03/21 20:01:30 by agondard         ###   ########.fr       */
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

/* MAIN */
void	print_tab(char **tab);
void	free_all(char **tab_str, long int *tab_int);


/* INITIALISATION */
void	init_struct(t_data *data);
char	**init_tab(int ac, char **av);

/* ERRORS */
int	check_doublon(long int *tab, t_data *data);


/* UTILS */
int		tab_len(char **tab);
long int	*atoi_tab(char **av, t_data *data);



#endif
