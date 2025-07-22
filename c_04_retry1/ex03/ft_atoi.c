/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:10:47 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/22 15:22:07 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_sign(char *str)
{
	int	neg_count;

	neg_count = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg_count++;
		str++;
	}
	return (neg_count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;

	sign = 1;
	nb = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (ft_count_sign(&str[i]) % 2 != 0)
		sign = -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48) % 10;
		i++;
	}
	return (nb * sign);
}

/*
int	main(void)
{
	printf("Resultado: %i\n",ft_atoi("	   +-----234a5"));
	return (0);
}
*/
