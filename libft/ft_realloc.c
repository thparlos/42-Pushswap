/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:11:56 by thparlos          #+#    #+#             */
/*   Updated: 2020/02/24 14:12:08 by thparlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_realloc(char *ptr, size_t n)
{
	char	*new;

	new = (char*)malloc(n);
	ft_bzero(new, n);
	ft_memcpy(new, ptr, ft_strlen(ptr) + 1);
	free(ptr);
	return (new);
}