/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:03:04 by thparlos          #+#    #+#             */
/*   Updated: 2020/02/24 13:05:28 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

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

void		zero_super_stack_moves(t_super_stack *super_stack)
{
	super_stack->moves->rb = 0;
	super_stack->moves->ra = 0;
	super_stack->moves->rr = 0;
	super_stack->moves->rrb = 0;
	super_stack->moves->rra = 0;
	super_stack->moves->rrr = 0;
	super_stack->moves->sb = 0;
	super_stack->moves->sa = 0;
	super_stack->moves->ss = 0;
	super_stack->moves->pb = 0;
	super_stack->moves->pa = 0;
}