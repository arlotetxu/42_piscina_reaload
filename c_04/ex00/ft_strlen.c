/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:21:12 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/22 13:11:37 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	//char	*str_1 = "Probando 11";
	char	*str_2 = "Probando probando 20";

	printf("Original: %lu\n", strlen(str_2));
	printf("Propia: %i\n", ft_strlen(str_2));

	return (0);
}
*/
