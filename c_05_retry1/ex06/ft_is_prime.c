/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:11:21 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/23 12:39:32 by joflorid         ###   ########.fr       */
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

/* int	main(void)
{
	printf("Resultado: %i\n", ft_is_prime(6521));
	return (0);
}
 */
