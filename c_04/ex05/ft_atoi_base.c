/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:21:23 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/22 10:03:17 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_checks(char *base, int n_base)
{
	int	i;
	int	j;
	int	count;

	if (!base || n_base < 2)
		return (1);
	count = 0;
	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				count++;
			if (base[j] == '+' || base[j] == '-')
				return (1);
			j++;
		}
		if (count > 1)
			return (1);
		i++;
		count = 0;
	}
	return (0);
}

int	ft_count_neg(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 != 0)
		return (-1);
	return (1);
}

int	ft_check_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n_base;
	int	i;
	int	result;
	int	sign;

	n_base = ft_strlen(base);
	if (ft_checks(base, n_base) == 1)
		return (1);
	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (ft_count_neg(&str[i]) == -1)
		sign = -1;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && ft_check_char(str[i], base) != -1)
	{
		result = result * n_base + ft_check_char(str[i], base);
		i++;
	}
	return (result * sign);
}

/*
int	main(void)
{
	printf("num: -7BJ - base /0123456789ABCDEF/ -- 123: %i\n",
		ft_atoi_base("  -++--7BJ", "0123456789ABCDEF"));
	printf("num: -47A85 - base /0123456789/ -- -47: %i\n",
		ft_atoi_base("-47A85", "0123456789"));
	printf("num: -1111011 - base /01/ -- -123: %i\n",
		ft_atoi_base("-1111011", "01"));
	printf("num: b - base /ab/ -- 1: %i\n",
		ft_atoi_base("b", "ab"));
	return (0);
}
*/
