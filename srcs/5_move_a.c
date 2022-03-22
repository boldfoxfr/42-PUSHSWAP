/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:34:37 by agondard          #+#    #+#             */
/*   Updated: 2022/03/22 06:47:54 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_a(int *a, t_data *data)
{
	int *tmp;

	int	tmp;
	if (data == NULL)
		return (-1);
	if (data->size_tab_a == 0 || data->size_tab_a == 1)
		return (0);
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	write(1, "sa\n", 3);
	return (0);
}
