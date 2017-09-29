/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 09:17:01 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/25 09:17:12 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb > 0)
	{
		factorial = ft_recursive_factorial(nb - 1) * nb;
		return (factorial);
	}
	else if (nb == 0)
	{
		return (factorial);
	}
	else
	{
		return (0);
	}
}
