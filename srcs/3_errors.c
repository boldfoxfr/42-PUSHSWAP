/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_errors.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 06:41:14 by agondard          #+#    #+#             */
/*   Updated: 2022/03/22 07:01:42 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doublon(long int *tab, t_data *data)
{
	int i;
	int j;

	i = 0;
	while (i < data->size_tab -1)
	{
		j = i + 1;
		while (j < data->size_tab)
		{
			if (tab[i] == tab[j])
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}

int	str_is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] == '0' && str[i + 1] != 0)
		i++;
	if (ft_strlen(str + i) > 12)
		return (1);
	if (atoi(str + i) > INT_MAX || atoi(str + i) < INT_MIN)
		return (1);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] != '\0')
		return (1);
	return (0);
}

int	check_arg(char **av, char **tab_str, int ac)
{
	int		i;
	char	**tmp;

	i = 0;
	if (ac > 2)
	{
		while (av && av[i])
		{
			tmp = ft_split(av[i], ' ');
			if (tab_len(tmp) > 1)
			{
				ft_free(tmp);
				return (1);
			}
			ft_free(tmp);
			i++;
		}
	}
	i = 0;
	while (tab_str && tab_str[i])
	{
		if (str_is_num(tab_str[i]))
			return (1);
		i++;
	}
	return (0);
}
