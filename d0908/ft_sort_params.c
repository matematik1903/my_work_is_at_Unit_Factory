/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 12:47:35 by brozhko           #+#    #+#             */
/*   Updated: 2017/08/30 12:47:40 by brozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printres(int argc, char *argv[])
{
	int		i;

	i = 0;
	while (argc-- > 1)
	{
		while (argv[argc][i] != '\0')
		{
			ft_putchar(argv[argc][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[0] != '\0' || s2[0] != '\0')
	{
		if (s1[i] == '\0')
			return (s2[i]);
		if (s2[i] == '\0')
			return (s1[i]);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		flag;
	char	*temp;

	i = argc - 1;
	flag = 0;
	while (i > 1)
	{
		flag = ft_strcmp(argv[i], argv[i - 1]);
		if (flag > 0)
		{
			temp = argv[i];
			argv[i] = argv[i - 1];
			argv[i - 1] = temp;
			if (i != (argc - 1))
				i += 2;
		}
		i--;
	}
	printres(argc, argv);
	return (0);
}
