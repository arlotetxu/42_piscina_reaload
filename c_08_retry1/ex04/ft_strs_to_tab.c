/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:20:51 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/29 11:44:20 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(src);
	dest = malloc(size + 1);
	if (!dest)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*my_array;
	int			i;

	my_array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!my_array)
	{
		my_array = NULL;
		return (my_array);
	}
	i = -1;
	while (++i < ac)
	{
		my_array[i].size = ft_strlen(av[i]);
		my_array[i].str = av[i];
		my_array[i].copy = ft_strdup(av[i]);
	}
	my_array[i].str = 0;
	return (my_array);
}
