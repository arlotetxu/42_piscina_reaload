/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:20:16 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/15 15:24:55 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			str++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	*str = "sAdgvb";

	printf("Retornado: %i\n", ft_str_is_lowercase(str));
	return (0);
}
*/
