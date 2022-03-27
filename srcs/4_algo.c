/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_algo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:40:54 by agondard          #+#    #+#             */
/*   Updated: 2022/03/27 19:01:08 by agondard         ###   ########.fr       */
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

void	for_5(int *a, int *b, t_data *data)
{
	int i;

	i = 0;
	while (data->size_tab_a != 3)
	{
		if (first_min(a, data) == 0)
			push_b(a, b, data);
		if (reverse_min(a, data) == 0)
			reverse_rotate_a(a, data);
		else
			rotate_a(a, data);
	}
	for_3(a, data);
	while (data->size_tab_b != 0)
	{
		if (b[0] < b[i])
			swap_b(b, data);
		push_a(a, b, data);
	}
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
	if (data->size_tab_a <= 3)
	{
		if (data->size_tab_a == 2)
			for_2(new_a, data);
		else
			for_3(new_a, data);
	}
	else if (data->size_tab_a <= 5)
		for_5(new_a, b, data);
	print_tab(new_a, data);
	free(new_a);
	free(b);
}
