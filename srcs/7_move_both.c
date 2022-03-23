/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_move_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:50:16 by agondard          #+#    #+#             */
/*   Updated: 2022/03/22 16:50:05 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_both(int *a, int *b, t_data *data)
{
	if (swap_a(a, data) < 0 && swap_b(b, data) < 0)
		return (1);
	swap_a(a, data);
	swap_b(b, data);
	write(1, "ss\n", 3);
	return (0);
}

int	rotate_both(int *a, int *b, t_data *data)
{
	rotate_a(a, data);
	rotate_b(b, data);
	write(1, "rr\n", 3);
	return (0);
}

int	reverse_rotate_both(int *a, int *b, t_data *data)
{
	reverse_rotate_a(a, data);
	reverse_rotate_b(b, data);
	write(1, "rrr\n", 3);
	return (0);
}
