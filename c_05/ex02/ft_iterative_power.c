/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:37:08 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/23 13:13:01 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	res = nb;
	i = 1;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

/* int	main(void)
{
	printf("Resultado potencia: %i\n", ft_iterative_power(5, 3));
	return (0);
 }
*/
