/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:46:21 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/22 13:03:39 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checks(int nbr, char *base)
{
	int	i;
	int	j;
	int	count;

	if (!nbr || ft_strlen(base) <= 1)
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

void	ft_putnbr(int n, int n_base, char *s_base)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(-(n / n_base), n_base, s_base);
		c = s_base[-(n % n_base)];
		write(1, &c, 1);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	if (n >= n_base)
		ft_putnbr(n / n_base, n_base, s_base);
	c = s_base[(n % n_base)];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n_base;

	if (ft_checks(nbr, base) == 1)
		return ;
	n_base = ft_strlen(base);
	ft_putnbr(nbr, n_base, base);
}


int	main(void)
{
	ft_putnbr_base(435, "0123456789ABCDEF");
	//ft_putnbr_base(348, "poniguay");
	// It must return nothing as we have a repeated character:
	//ft_putnbr_base(348, "ponyguay");
	// It must return nothing as we have only one character:
	//ft_putnbr_base( 348, "0");
	return (0);
}
