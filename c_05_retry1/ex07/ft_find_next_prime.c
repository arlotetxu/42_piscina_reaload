/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:50:17 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/23 16:57:50 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (n <= nb)
	{
		if (n == nb)
			return (i);
		n = n + (2 * i) + 1;
		i++;
	}
	return (i - 1);
}

int	ft_is_prime(int nb)
{
	int	limit;
	int	i;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	limit = ft_sqrt(nb);
	i = 2;
	while (i <= limit)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	nb_prime;

	nb_prime = nb;
	if (nb < 0)
		return (2);
	if (ft_is_prime(nb_prime) == 1)
		return (nb_prime);
	while (ft_is_prime(nb_prime) == 0)
		nb_prime++;
	return (nb_prime);
}

/*
int	main(void)
{
	printf("Num. devuelto primo: %i\n", ft_find_next_prime(8));
	return (0);
}
*/
