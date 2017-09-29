/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 16:31:32 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/30 16:31:35 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	j = max - min;
	if (min >= max)
	{
		*range = (int *)0;
		return (0);
	}
	(*range) = (int *)malloc(j - 1);
	if (range == NULL)
		return (0);
	i = 0;
	while (i < j)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	(*range)[i] = '\0';
	return (i);
}
