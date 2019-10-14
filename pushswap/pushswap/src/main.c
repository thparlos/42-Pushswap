/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:13:28 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 17:18:53 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	*p = pile_create(argv);
	return (o);
}

int		main(int argc, char **argv)
{
	t_p			a;
	int			opts;

	if (argc < 2)
		return (0);
	opts = init_program(argv, &a);
    //init program
	if (a.size == 0 || opts == -1)
		ft_putstr("Error\n\tUsage: -[hv] [number1 number2 ... numberX]");
	else if (a.size == 1)
		end_message(-1, 0);
	else if (opts == -2)
		end_message(0, 0);
	else
		push_swap(a, opts);
	ft_putchar('\n');
	return (0);
}