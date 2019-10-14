/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 14:25:14 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 14:25:24 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_header(void)
{
	ft_putstr("#######################################################\n");
	ft_putstr("#  _____           _        _____                     #\n");
	ft_putstr("# |  __ \\         | |      / ____|                    #\n");
	ft_putstr("# | |__) |   _ ___| |__   | (_____      ____ _ _ __   #\n");
	ft_putstr("# |  ___/ | | / __| '_ \\   \\___");
	ft_putstr(" \\ \\ /\\ / / _` | '_ \\  #\n");
	ft_putstr("# | |   | |_| \\__ \\ | | |  ___");
	ft_putstr(" \\ V  V / (_| | |_) | | #\n");
	ft_putstr("# |_|    \\__,_|___/_| |_| |___");
	ft_putstr("__/ \\_/\\_/ \\__,_| .__/  #\n");
	ft_putstr("#                     ______                  | |     #\n");
	ft_putstr("#                    |______|                 |_|     #\n");
	ft_putstr("#                                                     #\n");
	ft_putstr("#######################################################\n\n");
}

int		init_options(char **argv)
{
	int		i;
	int		j;
	int		op;

	i = 1;
	op = 1;
	while ((argv[i] && (argv[i][0] == '-' || !ft_strcmp(argv[i], "--"))))
	{
		j = 1;
		if (ISNUM(argv[i][j]))
			return (op);
		while (argv[i][j])
		{
			if (argv[i][j] == 'h')
				op = 0;
			else if (argv[i][j] == 'v')
				op = 2;
			else
				return (-1);
			j++;
		}
		i++;
	}
	return (op);
}

int		init_program(char **argv, t_p *p)
{
	int		o;

	if ((o = init_options(argv)) == -1 || !check_arg(argv))
		return (o);
	put_header();
	*p = pile_create(argv);
	return (o);
}