/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:24:39 by thparlos          #+#    #+#             */
/*   Updated: 2020/02/24 14:18:06 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char		**check_for_flags(char **av, t_flags *flags, int *ac)
{
	int		s;
	int		c;
	int		args;

	s = 1;
	c = 0;
	args = *ac;
	while ((s < args) && (av[s][c] == '-' || av[s][c] == 'c' ||
			av[s][c] == 'v') && !ft_isdigit(av[s][c + 1]))
	{
		if (av[s][c] == 'v')
			flags->v = 1;
		else if (av[s][c] == 'c')
			flags->c = 1;
		if ((av[s][c] == 'c' || av[s][c] == 'v') && !av[s][c + 1])
		{
			s++;
			c = 0;
			(*ac)--;
		}
		else
			c++;
	}
	return (&(av[s]));
}
