/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:32:29 by agondard          #+#    #+#             */
/*   Updated: 2022/03/21 19:34:24 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen (const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return(i);
	while (str && str[i])
		i++;
	return (i);
}
