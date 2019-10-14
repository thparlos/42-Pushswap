/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 14:29:24 by thparlos          #+#    #+#             */
/*   Updated: 2019/10/12 14:51:12 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

# define ISNUM(x) (x >= '0' && x <= '9')
# define INT_MAX 2147483647

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_putchar(char c);
void				ft_putnbr(int n);
void				ft_putstr(const char *str);
void				ft_putstrc(const char *str, char c);
int					ft_strcmp(const char *str1, const char *str2);
size_t				ft_strlen(const char *str);
void	            ft_putstrn(const char *str, int n);

#endif