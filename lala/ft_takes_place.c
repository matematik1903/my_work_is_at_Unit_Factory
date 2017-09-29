/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 18:43:54 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/31 18:43:57 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_out(int hour)
{
	if (hour == 11)
		printf("12.00 P.M.");
	else if (hour == 23)
		printf("12.00 A.M.");
	else if (hour + 1 < 12)
	{
		printf("%d", hour + 1);
		printf(".00 A.M.");
	}
	else
	{
		printf("%d", hour - 11);
		printf(".00 P.M.");
	}
	printf("\n");
}

void	ft_takes_place(int hour)
{
	char	*str;

	if (hour <= 24 && hour >= 0)
	{
		if (hour == 24)
			hour = 0;
		str = "THE FOLLOWING TAKES PLACE BETWEEN ";
		printf("%s", str);
		if (hour == 12)
			printf("12.00 P.M. AND ");
		else if (hour == 0)
			printf("12.00 A.M. AND ");
		else if (hour < 12)
		{
			printf("%d", hour);
			printf(".00 A.M. AND ");
		}
		else
		{
			printf("%d", hour - 12);
			printf(".00 P.M. AND ");
		}
		ft_out(hour);
	}
}
