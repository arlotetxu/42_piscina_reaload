/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:42:53 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/15 15:44:41 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			str++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	*str = "AGVcFD";

	printf("Retornado: %i\n", ft_str_is_uppercase(str));
	return (0);
}
*/
