/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 13:45:41 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/28 13:45:46 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int y;

	y = 0;
	i = 0;
	while (src[y] != '\0')
		y++;
	if (y < n)
	{
		return (dest);
	}
	while (dest[i] != '\0')
	{
		if (i <= n)
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
