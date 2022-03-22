/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:25:53 by agondard          #+#    #+#             */
/*   Updated: 2021/05/24 14:58:58 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void *destination, const void *source, size_t num)
{
	char			*dest;
	const char		*src;
	unsigned int	i;

	if (destination == NULL && source == NULL)
		return (NULL);
	dest = (char *)destination;
	src = (const char *)source;
	i = 0;
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
