/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 19:47:49 by brozhko           #+#    #+#             */
/*   Updated: 2017/09/02 19:47:52 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*malloc(size_t sizemem);
int		ft_word_count(char *str);
char	**ft_split_whitespaces(char *str);
void	ft_split(int res_count, char **result, int temp, char *str);
void	ft_cpy(int res_count, int temp, char **result, char *str);

static	int	g_count;

int		ft_word_count(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_cpy(int res_count, int temp, char **result, char *str)
{
	int size;

	size = 0;
	while (g_count + size != temp)
	{
		result[res_count][size] = str[g_count + size];
		++size;
	}
	result[res_count][size] = '\0';
	g_count = temp;
}

void	ft_split(int res_count, char **result, int temp, char *str)
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
			result[res_count] = (char*)malloc(sizeof(char) * size + 1);
			ft_cpy(res_count, temp, result, str);
			++res_count;
		}
		if (str[g_count] == 9 || str[g_count] == 32 || str[g_count] == '\n')
		{
			temp++;
			g_count++;
		}
	}
	result[res_count] = NULL;
}

char	**ft_split_whitespaces(char *str)
{
	char **result;

	if (str[0] == '\0')
		return (NULL);
	result = (char**)malloc(sizeof(char*) * ft_word_count(str));
	ft_split(0, result, 0, str);
	return (result);
}
