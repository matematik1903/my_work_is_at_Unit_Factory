/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piramida.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:28:53 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/27 19:29:07 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	lengt(int n)
{
	int len;

	len = 1;
	if (n == 1)
	{
		return (7);
	}
	len = 2 * (n + 2) + (1 + n / 2) * 2 + lengt(n - 1);
	return (len);
}

int	pri_figur(int x1, int x2, int n, int u, int r)
{
	int i[6];

	if (n % 2 == 0)
	{
		i[0] = n - 1;
		i[4] = 3;
	}
	else
	{
		i[0] = n;
		i[4] = 2;
	}
	i[1] = 0;
	i[6] = x1 - 2 * x2 + 2;
	i[2] = i[6] / 2 - i[0] + 1;
	i[3] = i[6] / 2 + i[0] - 1;
	while (i[1] < f)
	{
		if (n == u)
		{
			if (r == ( n - (n - i[4]) / 2 ) && n >= 5 && i[1] == i[6] / 2 + 2)
			{
				ft_putchar('$');
			}
			else if (i[1] > i[2] && i[1] < i[3] &&  r >= i[4])
			{
				ft_putchar('|');
			}
			else
				ft_putchar('*');
		}
		else
			ft_putchar('*');
		i[1]++;
	}
	ft_putchar('\\');
	return (0);
}

void	function1(int x, int y)
{
	while (x != y)
	{
		ft_putchar(' ');
		x++;
	}
	ft_putchar('/');
}

void	sastantua(int size);
{
	int f[4];
	int l;
	int len;

	l = lengt(size);
	f[0] = 0;
	f[1] = 0;
	f[2] = 3;
	len = lengt(size) / 2 + 1;
	while (len >= 0)
	{
		function1(f[1], len);
		f[3] = f[0] - 2;
		pri_figur(l, len, size, f[3], f[0]);
		ft_putchar('\n');
		f[1] = 0;
		len = len - 1;
		f[0]++;
		if (f[0] == f[2])
		{
			len = len - 1 - (f[2] - 1) / 2;
			f[2]++;
			f[0] = 0;
		}
	}
}
