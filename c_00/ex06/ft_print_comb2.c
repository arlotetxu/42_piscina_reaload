/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:40:03 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/13 11:47:01 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_second_pair(char c1, char c2)
{
	char	c3;
	char	c4;

	c3 = '0';
	while (c3 <= '9')
	{
		c4 = '1';
		while (c4 <= '9')
		{
			if ((c1 + c2) < (c3 + c4))
			{
				ft_putchar(c1);
				ft_putchar(c2);
				ft_putchar(' ');
				ft_putchar(c3);
				ft_putchar(c4);
				if (!(c1 == '9' && c2 == '8' && c3 == '9' && c4 == '9'))
					write(1, ", ", 2);
			}
			c4++;
		}
		c3++;
	}
}


void	ft_print_comb2(void)
{
	char	c1;
	char	c2;

	c1 = '0';
	while (c1 <= '9')
	{
		c2 = '0';
		while (c2 <= '9')
		{
			ft_second_pair(c1, c2);
			c2++;
		}
		c1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
