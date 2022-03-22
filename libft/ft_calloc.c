/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 09:19:57 by agondard          #+#    #+#             */
/*   Updated: 2021/06/01 08:25:24 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cpt, size_t size)
{
	void	*ptr;

	if (!cpt || !size)
	{
		ptr = malloc(0);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	else
	{
		ptr = malloc(cpt * size);
		if (!ptr)
			return (NULL);
	}
	ft_bzero(ptr, (cpt * size));
	return (ptr);
}
