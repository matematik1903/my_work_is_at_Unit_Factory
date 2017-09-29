/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 23:41:00 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/31 23:41:08 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_puchar(char c);

void	ft_print_words_tables(char **tab)
{
	int size;
	int count;
	int i;

	size = 0;
	count = 0;
	while (tab[size] != 0)
		size++;
	while (count < size)
	{
		i = 0;
		while (tab[count][i] != '\0')
		{
			ft_puchar(tab[count][i]);
			i++;
		}
		ft_puchar('\n');
		count++;
	}
}
