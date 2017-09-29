/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 23:05:24 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/31 23:05:39 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if (i < k && k < j)
		return (k);
	if (k < i && i < j)
		return (i);
	if (i < j && j < k)
		return (j);
	if (k < j && j < i)
		return (j);
	if (j < k && k < i)
		return (k);
	if (j < i && i < k)
		return (i);
	if (j == k || j == i)
		return (j);
	if (i == k || i == j)
		return (i);
	if (k == i || k == j)
		return (k);
}
