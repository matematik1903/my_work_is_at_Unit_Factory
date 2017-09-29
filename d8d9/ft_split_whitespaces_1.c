/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 09:14:21 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/31 09:14:28 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static	int	g_count;

int		ft_word_count(char *str)
{
	int c;

	c = 0;
	while (str[count] != '\0')
	{
		c++;
	}
	return (c);
}

void	ft_cpy(int res_count, int temp, char **res, char *str)
{
	int size;

	size = 0;
	while (g_count + size != temp)
	{
		res[res_count][size] = str[g_count + size];
		++size;
	}
	res[res_count][size] = '\0';
	g_count = temp;
}

void	ft_split(int res_count, char **res, int temp, char *str)
{
	int size;

	g_count = 0;
	while (1)
	{
		if (str[g_count] == '\0')
			break ;
		size = 0;
		while (str[temp] != 9 && str[temp] != 32
			&& str[temp] != '\0' && str[g_count] != '\n')
			temp = g_count + size++;
		if (size != 0)
		{
			res[res_count] = (char*)malloc(sizeof(char) * size + 1);
			ft_cpy(res_count, temp, res, str);
			++res_count;
		}
		if (str[g_count] == 9 || str[g_count] == 32 || str[g_count] == '\n')
		{
			temp++;
			g_count++;
		}
	}
	res[res_count] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char **res;

	if (str[0] == '\0')
		return (0);
	res = (char**)malloc(sizeof(char*) * ft_word_count(str));
	ft_split(0, res, 0, str);
	return (res);
}
