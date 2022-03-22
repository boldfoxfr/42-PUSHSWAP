/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_init.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:25:17 by agondard          #+#    #+#             */
/*   Updated: 2022/03/22 07:03:13 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_struct(t_data *data)
{
	data->size_tab = 0;
	data->size_tab_a = 0;
	data->size_tab_b = 0;
	data->min = 0;
}

char	**init_tab(int ac, char **av)
{
	int	i;
	char	**tab;

	i = 0;
	tab = malloc(sizeof(char**) * ac);
	if(!tab)
		return(NULL);
	while (i < ac - 1)
	{
		tab[i] = ft_strdup(av[i + 1]);
		i++;
	}
	tab[i] = NULL;
	return(tab);
}

