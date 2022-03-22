/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_algo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:40:54 by agondard          #+#    #+#             */
/*   Updated: 2022/03/22 06:40:59 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*long_to_int(long int *a, t_data *data)
{
	int	*tmp;
	int	i;

	i = 0;
	tmp = malloc(sizeof(int) * data->size_tab);
	if (!tmp)
		return (0);
	while (i < data->size_tab)
	{
		tmp[i] = a[i];
		i++;
	}
	data->size_tab_a = data->size_tab;
	return (tmp);
}

int find_min(int *a, t_data *data)
{
	int i;
	int tmp;

	i = 0;
	tmp = a[i];
	while (i < data->size_tab_a )
	{
		if (tmp > a[i])
			tmp = a[i];
		i++;
	}
	return (tmp);
}

void	algo_choice(long int *a, t_data	*data)
{
	int *b;
	int *new_a;

	new_a = long_to_int(a, data);
	b = malloc(sizeof(int) * data->size_tab);
	if (!b)
		return ;
	data->min = find_min(new_a, data);

	if (swp->sizetab_a <= 3)

	else if (swp->sizetab_a <= 5)

	else


	free(new_a);
	free(b);
}
