/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 18:22:22 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/24 18:22:26 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int positiv;
	int j;

	positiv = 0;
	j = 0;
	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] == '-')
			positiv = 1;
		if ((str[i] >= '0') || (str[i] <= '9'))
		{
			j *= 10;
			j += (str[i] - '0');
		}
		i++;
	}
	if (positiv == 1)
	{
		return (-j);
	}
	return (j);
}
