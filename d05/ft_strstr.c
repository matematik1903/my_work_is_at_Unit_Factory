/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 14:28:30 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/28 14:28:41 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int y;
	int k;
	int i;

	i = 0;
	y = 0;
	k = 0;
	while (to_find[k] != '\0')
		k++;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			while (str[i] == to_find[y] || to_find[y] != '\0')
			{
				i++;
				y++;
			}
			if (y == k)
				return (&str[i - k]);
		}
		i++;
	}
	return (&str[i]);
}
