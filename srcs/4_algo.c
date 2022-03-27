/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_algo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:40:54 by agondard          #+#    #+#             */
/*   Updated: 2022/03/27 10:03:28 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	for_2(int *a, t_data *data)
{
	if (a[0] < a[1])
		swap_a(a, data);
}

void	for_3(int *a, t_data *data)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] < a[0])
			rotate_a(a, data);

	else if (a[0] > a[1] && a[1] > a[2] && a[2] < a[0])
	{
		swap_a(a, data);
		reverse_rotate_a(a, data);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] > a[0])
	{
		swap_a(a, data);
		rotate_a(a, data);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] > a[0])
		swap_a(a, data);
	else if (a[0] < a[1] && a[1] > a[2] && a[2] < a[0])
		reverse_rotate_a(a, data);
}

int		min_index(int *a, t_data *data)
{
	int i;

	i = 1;
	while (i < data->size_tab_a)
	{
		if (data->min > a[i])
			data->min = a[i];
		i++;
	}
	return (i);
}

void	for_4_topmin(int *a, int *b, t_data *data)
{
	push_b(a, b, data);
	for_3(a, data);
	push_a(a, b, data);
}

void	for_4(int *a, int *b, t_data *data)
{
	int min;
	int min_i;

	min = find_min(a, data);
	min_i = min_index(&min, data);
	if (min_i == 4)
		reverse_rotate_a(a, data);
	else
	{
		while ((min_i--) != 1)
			rotate_a(a, data);
	}
	for_4_topmin(a, b, data);
}

void	for_5(int *a, int *b, t_data *data)
{
	int	min;
	int	min_i;

	min = find_min(a, data);
	min_i = min_index(&min, data);;
	if (min_i > 3)
	{
		while ((min_i++) != 6)
			reverse_rotate_a(a, data);
	}
	else
	{
		while ((min_i--) != 1)
			rotate_a(a, data);
	}
	push_b(a, b, data);
	for_4(a, b, data);
	push_a(a, b, data);
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
	data->max = find_max(new_a, data);

	if (data->size_tab_a <= 3)
	{
		if (data->size_tab_a == 2)
			for_2(new_a, data);
		else
			for_3(new_a, data);
	}
	else if (data->size_tab_a <= 5)
		for_4(new_a, b, data);
	print_tab(new_a, data);
	free(new_a);
	free(b);
}
