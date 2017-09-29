/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 17:11:19 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/28 17:11:21 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int y;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				y = 0;
			else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				y = 0;
			else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				y = 0;
			else
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
