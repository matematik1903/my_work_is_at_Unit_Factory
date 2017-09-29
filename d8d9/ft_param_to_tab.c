/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 20:26:20 by brozhko           #+#    #+#             */
/*   Updated: 2017/09/02 20:26:23 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char						*ft_strdup(char *src)
{
	int						size;
	int						i;
	char					*res;

	size = 0;
	while (src[size])
		size++;
	res = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int							ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

struct s_stock_par			*ft_param_to_tab(int ac, char **av)
{
	t_stock_par				*ptr;
	int						i;

	i = 0;
	ptr = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		ptr[i].size_param = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		ptr[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}
