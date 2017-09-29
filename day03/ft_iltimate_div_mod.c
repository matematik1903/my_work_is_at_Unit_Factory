/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iltimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 16:55:27 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/24 16:55:32 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_res_c;
	int temp_res_d;

	temp_res_c = *a / *b;
	temp_res_d = *a % *b;
	*a = temp_res_c;
	*b = temp_res_d;
}
