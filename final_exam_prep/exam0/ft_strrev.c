/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:43:16 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/30 13:54:47 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	aux;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	j = 0;
	while (j <= i)
	{
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
		i--;
		j++;
	}
	return (str);
}

int	main(void)
{
	char str[50] = "Probando Probando";
	printf("Resultado: %s\n", ft_strrev(str));
	return (0);
}
