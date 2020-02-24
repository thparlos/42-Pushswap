/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:25:04 by thparlos          #+#    #+#             */
/*   Updated: 2020/02/24 14:18:56 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "checker.h"

void		print_spaces(int spaces)
{
	while (spaces--)
		printf(" ");
}

int			longest_int_len(t_stack *stack_a)
{
	int		longest;
	size_t	len;
	int		i;

	longest = stack_a->nums[0];
	len = ft_int_len(longest);
	i = 1;
	while (i < stack_a->cur_size)
	{
		if (ft_int_len(stack_a->nums[i]) > len)
		{
			longest = stack_a->nums[i];
			len = ft_int_len(stack_a->nums[i]);
		}
		i++;
	}
	if (longest < 0)
		len++;
	return (len);
}
