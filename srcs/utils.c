/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:25:56 by agondard          #+#    #+#             */
/*   Updated: 2022/03/22 07:03:25 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			tab_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

long int	*atoi_tab(char **av, t_data *data)
{
	long int *tab;
	int i;

	i = 0;
	data->size_tab = tab_len(av);
	tab = malloc(sizeof(long int *) * data->size_tab);
	if (!tab)
		return(NULL);
	while (i < data->size_tab)
	{
		tab[i] = (long)ft_atoi(av[i]);
		i++;
	}
	return(tab);
}


void		free_all(char **tab_str, long int *tab_int)
{
	int i;

	i = 0;
	while (tab_str && tab_str[i])
	{
		free(tab_str[i]);
		i++;
	}
	free(tab_str);
	free(tab_int);
}
