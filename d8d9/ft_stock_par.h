/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 21:48:25 by brozhko           #+#    #+#             */
/*   Updated: 2017/09/02 21:48:30 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct			s_stock_par
{
	int					size_param;
	char				*str;
	char				*copy;
	char				**tab;
}						t_stock_par;

struct s_stock_par		*ft_param_to_tab(int ac, char **av);

void					ft_putchar(char c);

#endif
