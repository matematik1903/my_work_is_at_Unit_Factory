/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 15:36:50 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/30 15:36:53 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int j;
	int *d;

	j = 0;
	if (min >= max)
		return (NULL);
	else
		i = max - min;
	d = (int *)malloc(i * sizeof(int));
	if (d == NULL)
		return (NULL);
	while (j < i)
	{
		d[j] = min + j;
		j++;
	}
	d[i] = '\0';
	return (d);
}
