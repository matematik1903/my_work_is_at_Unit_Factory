/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_programs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 20:19:36 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/30 20:19:53 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_put_str(char *result, char **str, int str_nm)
{
	int i;
	int j;
	int c;

	i = 1;
	c = 0;
	while (i < str_nm)
	{
		j = 0;
		while (str[i][j])
		{
			result[c++] = str[i][j++];
		}
		result[c++] = '\n';
		i++;
	}
	result[c > 0 ? c - 1 : 0] = '\0';
}

int		ft_count_param_ch(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	int		i;
	char	*temp;

	size = 0;
	i = 1;
	while (i < argc)
		size += ft_count_param_ch(argv[i++]);
	temp = (char*)malloc(size + 1);
	ft_put_str(temp, argv, argc);
	return (temp);
}
