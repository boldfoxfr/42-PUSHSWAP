/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:00:44 by agondard          #+#    #+#             */
/*   Updated: 2021/05/24 13:41:12 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr (void *ptr, int value, size_t num)
{
	unsigned char	*ptr2;
	unsigned int	i;

	ptr2 = (unsigned char *) ptr;
	i = 0;
	while (i < num)
	{
		if (ptr2[i] == (unsigned char) value)
			return (ptr2 + i);
		i++;
	}
	return (NULL);
}
