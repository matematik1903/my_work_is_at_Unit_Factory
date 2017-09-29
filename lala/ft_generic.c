/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:48:53 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/31 17:49:00 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generic(void)
{
	char	*k;
	int		i;

	k = "Tut tut ; Tut tut";
	i = 0;
	while (k[i] != '\0')
	{
		ft_putchar(k[i]);
		i++;
	}
	ft_putchar('\n');
}
