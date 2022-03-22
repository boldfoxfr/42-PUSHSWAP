/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:57:36 by agondard          #+#    #+#             */
/*   Updated: 2022/03/22 07:50:12 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_tab(char **tab)
{
	int	i = 0;

	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

void	print_tab_int(long int *tab, t_data *data)
{
	int	i = 0;

	while (i < data->size_tab)
	{
		printf("%ld\n", tab[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	long int	*tab_int;
	char		**tab_str;
	t_data		data;

	init_struct(&data);
	if (ac == 2)
		tab_str = ft_split(av[1], ' ');
	else
		tab_str = init_tab(ac, av);
	tab_int = atoi_tab(tab_str, &data);
	if (check_doublon(tab_int, &data) || check_arg(av, tab_str, ac))
	{
		write(1, "Error\n", 6);
		free_all(tab_str, tab_int);
		return(1);
	}
	print_tab(tab_str);
	print_tab_int(tab_int, &data);
	return(0);
}
