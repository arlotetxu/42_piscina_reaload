/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:42:25 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/31 12:47:18 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/
#include <stdlib.h>
#include <stdio.h>

int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		digits;
	int		to;
	long	n;

	n = nbr;
	to = 0;
	digits = ft_count_digits(n);
	str = malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
		to = 1;
	}
	str[digits] = '\0';
	while (digits > to)
	{
		str[digits -1] = (n % 10) + '0';
		n = n / 10;
		digits--;
	}
	return (str);
}

int	main(void)
{
	printf("Valor: %s\n", ft_itoa(-56987));
	return (0);
}
