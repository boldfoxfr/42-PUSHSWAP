/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:17:09 by agondard          #+#    #+#             */
/*   Updated: 2021/05/24 15:23:33 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned int	i;

	ptr1 = (unsigned char *) pointer1;
	ptr2 = (unsigned char *) pointer2;
	i = 0;
	while (i < size)
	{
		if ((unsigned char) ptr1[i] != (unsigned char) ptr2[i])
			return ((unsigned char) ptr1[i] - (unsigned char) ptr2[i]);
		i++;
	}
	return (0);
}
