/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 07:53:34 by agondard          #+#    #+#             */
/*   Updated: 2021/06/08 08:48:36 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	long	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		return (++i);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	int		len;

	i = n;
	len = ft_len(n);
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (i == 0)
		str[0] = '0';
	if (i < 0)
	{
		str[0] = '-';
		i = i * -1;
	}
	while (i > 0)
	{
		str[len--] = (i % 10) + '0';
		i = i / 10;
	}
	return (str);
}
