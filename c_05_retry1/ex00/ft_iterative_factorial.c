/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:35:24 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/22 18:15:47 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	res = 1;
	while (nb >= 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
int	main(void)
{
	printf("Resultado 6: %i\n", ft_iterative_factorial(6));
	return (0);
}
*/
