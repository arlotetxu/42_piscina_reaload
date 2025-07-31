/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:14:53 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/30 12:52:32 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

#include <unistd.h>

int	main(void)
{
	char	c;

	c = 90;
	while (c >= 65)
	{
		if (c % 2 == 0)
		{
			c += 32;
			write(1, &c, 1);
			c -= 32;
		}
		else
			write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}
