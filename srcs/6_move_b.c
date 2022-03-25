/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_move_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:46:42 by agondard          #+#    #+#             */
/*   Updated: 2022/03/25 16:05:01 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_b(int *b, t_data *data)
{
	int	tmp;

	if (data == NULL)
		return (1);
	if (data->size_tab_b == 0 || data->size_tab_b == 1)
		return (0);
	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	write(1, "sb\n", 3);
	return (0);
}

int	rotate_b(int *b, t_data *data)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	tmp = b[i];
	if (data == NULL)
		return (1);
	if (data->size_tab_b == 0 || data->size_tab_b == 1)
		return (0);
	while (i < data->size_tab_b - 1)
	{
		j = i + 1;
		b[i] = b[j];
		i++;
	}
	b[i] = tmp;
	write(1, "rb\n", 3);
	return (0);
}

int	reverse_rotate_b(int *b, t_data *data)
{
	int	tmp;
	int	i;
	int	j;

	i = -1;
	tmp = b[i];
	if (data == NULL)
		return (1);
	if (data->size_tab_b == 0 || data->size_tab_b == 1)
		return (0);
	while (i < data->size_tab_b)
	{
		j = i - 1;
		b[i] = b[j];
		i--;
	}
	b[i] = tmp;
	write(1, "rrb\n", 4);
	return (0);
}

void	push_b(int *a, int *b, t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = data->size_tab_b + 1;
	tmp = a[0];
	while (i)
	{
		j = i - 1;
		b[i] = b[j];
		i--;
	}
	b[i] = tmp;
	i = 0;
	while (i < data->size_tab_a - 1)
	{
		j = i + 1;
		a[i] = a[j];
		i++;
	}
	a[i] = 0;
	data->size_tab_b += 1;
	data->size_tab_a -= 1;
	write(1, "pb\n", 3);

}
