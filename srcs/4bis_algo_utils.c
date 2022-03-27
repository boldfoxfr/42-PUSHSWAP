/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4bis_algo_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:16:44 by agondard          #+#    #+#             */
/*   Updated: 2022/03/27 19:01:04 by agondard         ###   ########.fr       */
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

	i = data->min;
	tmp = a[i];
	while (i < data->size_tab_a)
	{
		if (tmp > a[i])
			tmp = a[i];
		i++;
	}
	return (tmp);
}

int		first_min(int *a, t_data *data)
{
	int	i;

	i = 1;
	while (i < data->size_tab_a)
	{
		if (a[0] > a[i])
			return (1);
		i++;
	}
	return (0);
}

int		reverse_min(int *a, t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size_tab_a - 1)
	{
		if (a[data->size_tab_a - 1] > a[i])
			return (1);
		i++;
	}
	return (0);
}
