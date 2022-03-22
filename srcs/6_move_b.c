/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:46:42 by agondard          #+#    #+#             */
/*   Updated: 2022/03/22 06:47:46 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_b(int *b, t_data *data)
{
	int *tmp;

	int	tmp;
	if (data == NULL)
		return (-1);
	if (data->size_tab_b == 0 || data->size_tab_b == 1)
		return (0);
	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	write(1, "sb\n", 3);
	return (0);
}
