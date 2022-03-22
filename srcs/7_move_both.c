/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_both.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:50:16 by agondard          #+#    #+#             */
/*   Updated: 2022/03/22 06:54:51 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_both(int *a, int *b, t_data *data)
{
	if (swap_a(a, data) < 0)
		return (1);
	swap_a(a, data);
	if (swap_b(b, data) < 0)
		return (1);
	swap_b(b, data);
	write(1, "ss\n", 3);
	return (0);
}
