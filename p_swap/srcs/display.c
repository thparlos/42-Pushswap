/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:03:36 by thparlos          #+#    #+#             */
/*   Updated: 2020/02/24 14:04:14 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "swap.h"

void		handle_acolor(char *op, int a, t_stack *stack_a)
{
	if (((ft_strcmp(op, "pb") == 0) ||
				(ft_strcmp(op, "pa") == 0)) && a == 0)
		printf("%s%d%s", CYN, stack_a->nums[a], RESET);
	else if (((ft_strcmp(op, "sa") == 0) && (a == 0 || a == 1)))
		printf("%s%d%s", CYN, stack_a->nums[a], RESET);
	else if (((ft_strcmp(op, "ra") == 0) || (ft_strcmp(op, "rr") == 0)))
		printf("%s%d%s", CYN, stack_a->nums[a], RESET);
	else if (((ft_strcmp(op, "rra") == 0) ||
				(ft_strcmp(op, "rrr") == 0)))
		printf("%s%d%s", CYN, stack_a->nums[a], RESET);
	else
		printf("%d", stack_a->nums[a]);
}

void		handle_bcolor(char *op, int b, t_stack *stack_b)
{
	if (((ft_strcmp(op, "pb") == 0) || (ft_strcmp(op, "pa") == 0)) && b == 0)
		printf("%s%d%s\n", CYN, stack_b->nums[b], RESET);
	else if (((ft_strcmp(op, "sb") == 0) && (b == 0 || b == 1)))
		printf("%s%d%s\n", CYN, stack_b->nums[b], RESET);
	else if (((ft_strcmp(op, "rb") == 0) || (ft_strcmp(op, "rr") == 0)))
		printf("%s%d%s\n", CYN, stack_b->nums[b], RESET);
	else if (((ft_strcmp(op, "rrb") == 0) || (ft_strcmp(op, "rrr") == 0)))
		printf("%s%d%s\n", CYN, stack_b->nums[b], RESET);
	else
		printf("%d\n", stack_b->nums[b]);
}

void		display_a(char *op, t_flags *flags, int a, t_stack *stack_a)
{
	int		spaces;

	spaces = longest_int_len(stack_a) + 1;
	if (a < (stack_a->cur_size))
	{
		if (flags->c)
			handle_acolor(op, a, stack_a);
		else
			printf("%d", stack_a->nums[a]);
	}
	else
		print_spaces(1);
	print_spaces(spaces - ft_int_len(stack_a->nums[a]));
}

void		display_b(char *op, t_flags *flags, int b, t_stack *stack_b)
{
	if (b < (stack_b->cur_size))
	{
		if (flags->c)
			handle_bcolor(op, b, stack_b);
		else
			printf("%d\n", stack_b->nums[b]);
	}
	else
		printf("\n");
}

void		display_stacks(t_flags *flags, char *op,
							t_stack *stack_a, t_stack *stack_b)
{
	int		a;
	int		b;
	int		spaces;

	a = 0;
	b = 0;
	spaces = longest_int_len(stack_a) + 1;
	printf("%s\n", op);
	printf("--------\n");
	while ((a < (stack_a->cur_size) || (b < (stack_b->cur_size))))
	{
		display_a(op, flags, a, stack_a);
		display_b(op, flags, b, stack_b);
		a++;
		b++;
	}
	printf("-");
	print_spaces(spaces - 1);
	printf("-\na");
	print_spaces(spaces - 1);
	printf("b\n--------\n");
}
