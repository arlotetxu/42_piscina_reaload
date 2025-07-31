/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:06:23 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/30 12:11:55 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

#include <unistd.h>

int	main(void)
{
	int		i;
	char	c;

	i = 1;
	c = 'a';
	while (c >= 'a' && c <= 'z')
	{
		if (i % 2 != 0)
			write(1, &c, 1);
		else
		{
			c = c - 32;
			write(1, &c, 1);
			c = c + 32;
		}
		c++;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
