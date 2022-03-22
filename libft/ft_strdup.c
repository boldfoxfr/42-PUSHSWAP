/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:16:24 by agondard          #+#    #+#             */
/*   Updated: 2022/03/21 19:37:42 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		size;
	if (!src)
		return(NULL);
	size = ft_strlen(src);
	cpy = (char *)malloc(sizeof (char) * (size + 1));
	if (!cpy)
		return (NULL);
	size = 0;
	while (src && src[size])
	{
		cpy[size] = src[size];
		size++;
	}
	cpy[size] = '\0';
	return (cpy);
}
