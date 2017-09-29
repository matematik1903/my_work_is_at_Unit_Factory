/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 13:46:27 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/24 13:48:24 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long long i;
	long long str[10];
	long long temp;

	i = 0;
	temp = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		temp = -temp;
	}
	str[i++] = temp % 10;
	temp /= 10;
	while (temp)
	{
		str[i++] = temp % 10;
		temp /= 10;
	}
	while (i)
	{
		ft_putchar(str[--i] + '0');
	}
}
