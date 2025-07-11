/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:11:33 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/11 11:18:15 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0';
	while (c1 <= '9')
	{
		c2 = c1 + 1;
		while (c2 <= '9')
		{
			c3 = c2 + 1;
			while (c3 <= '9')
			{
				write(1, &c1, 1);
				write(1, &c2, 1);
				write(1, &c3, 1);
				if (!(c1 == '7' && c2 == '8' && c3 == '9'))
					write(1, ", ", 2);
				c3++;
			}
			c2++;
		}
		c1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
