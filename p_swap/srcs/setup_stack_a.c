/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_stack_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:00:06 by thparlos          #+#    #+#             */
/*   Updated: 2020/02/24 14:16:34 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "swap.h"

int				end_of_num(char *str)
{
	return (*str == ' ' || !(*(str + 1))) ? 1 : 0;
}

int				get_nums(char *str, t_stack *stack_a)
{
	int			sign;
	long int	num;

	num = 0;
	sign = 1;
	while (*str)
	{
		if (*str == '-')
			sign = -1;
		else if (ft_isdigit(*str))
			num = (num * 10) + (*str - '0');

		if (end_of_num(str))
		{
			num *= sign;
			if (!is_valid(num, stack_a) && printf("Error\n"))
				exit(1);
			stack_a->nums[stack_a->cur_size] = num;
			stack_a->cur_size++;
			num = 0;
			sign = 1;
		}

		str++;
	}
	return (1);
}

int				make_stack_a(char **av, int ac, t_stack *stack_a)
{
	int			i;

	i = 0;
	while (i < ac)
	{
		get_nums(av[i], stack_a);
		i++;
	}
	return (1);
}
