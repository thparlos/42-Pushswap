/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:59:17 by thparlos          #+#    #+#             */
/*   Updated: 2020/02/24 13:05:35 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	rotate(t_stack *stack)
{
	int	temp;

	if (stack->cur_size)
	{
		temp = (stack->nums)[0];
		ft_memmove(&(stack->nums[0]), &(stack->nums[1]),
					sizeof(int) * (stack->cur_size));
		stack->nums[stack->cur_size - 1] = temp;
	}
}

void	rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void	reverse_rotate(t_stack *stack)
{
	int	temp;

	temp = stack->nums[stack->cur_size - 1];
	ft_memmove(&(stack->nums[1]), &(stack->nums[0]),
				sizeof(int) * (stack->cur_size));
	stack->nums[0] = temp;
}

void	reverse_rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}