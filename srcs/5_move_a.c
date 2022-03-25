/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_move_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:34:37 by agondard          #+#    #+#             */
/*   Updated: 2022/03/25 16:07:06 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_a(int *a, t_data *data)
{
	int	tmp;

	if (data == NULL)
		return (1);
	if (data->size_tab_a == 0 || data->size_tab_a == 1)
		return (0);
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	write(1, "sa\n", 3);
	return (0);
}

int	rotate_a(int *a, t_data *data)
{
	int	tmp;
	int i;
	int j;

	i = 0;
	tmp = a[i];
	if (data == NULL)
		return (1);
	if (data->size_tab_a == 0 || data->size_tab_a == 1)
		return (0);
	while (i < data->size_tab_a - 1)
	{
		j = i + 1;
		a[i] = a[j];
		i++;
	}
	a[i] = tmp;
	write(1, "ra\n", 3);
	return (0);
}

int	reverse_rotate_a(int *a, t_data *data)
{
	int	tmp;
	int i;
	int j;

	i = data->size_tab_a - 1;
	tmp = a[i];
	if (data == NULL)
		return (1);
	if (data->size_tab_a == 0 || data->size_tab_a == 1)
		return (0);
	while (i)
	{
		j = i - 1;
		a[i] = a[j];
		i--;
	}
	a[i] = tmp;
	write(1, "rra\n", 4);
	return (0);
}

void	push_a(int *a, int *b, t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = data->size_tab_a;
	tmp = b[0];
	while (i)
	{
		j = i - 1;
		a[i] = a[j];
		i--;
	}
	a[i] = tmp;
	i = 0;
	while (i < data->size_tab_b - 1)
	{
		j = i + 1;
		b[i] = b[j];
		i++;
	}
	b[i] = 0;
	data->size_tab_a += 1;
	data->size_tab_b -= 1;
	write(1, "pa\n", 3);
}
