/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:31:55 by thparlos          #+#    #+#             */
/*   Updated: 2019/08/12 15:59:26 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_checker
{
	t_list			*ints_a; //liste int pile A
	t_list			*ints_b;//liste int pile B
	t_list			*rev_ints_a;
	t_list			*rev_ints_b;
	char			*line;
	char			**splitted;
	char			disp_color;
	char			disp_stack;
	int				nb_oper;
	int				lst_avg;
	int				lst_len;
	int				lst_median_id;
	int				*localints;
}					t_checker;

typedef struct		s_intid
{
	int				id;
	int				val;
}					t_intid;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;