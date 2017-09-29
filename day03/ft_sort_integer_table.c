/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 18:55:10 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/24 18:55:14 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 0;
	while ((i + 1) < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tab[i] = tab[i] + tab[i + 1];
			tab[i + 1] = tab[i] - tab[i + 1];
			tab[i] = tab[i] - tab[i + 1];
			if (i != 0)
			{
				i--;
				i--;
			}
		}
		i++;
	}
}
