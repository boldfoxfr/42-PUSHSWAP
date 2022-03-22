/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 08:25:53 by agondard          #+#    #+#             */
/*   Updated: 2021/06/09 15:47:37 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	csearch;

	csearch = (char) c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == csearch)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
