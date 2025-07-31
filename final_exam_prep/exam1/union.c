/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:30:00 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/31 09:11:26 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>

PROPUESTA: concatenar las cadenas con strcat y luego mirar si cada caracter ya
ha salido. Desde 0 hasta i
*/

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dst, char *src)
{
	int	i;
	int	j;

	if (!dst)
		return (src);
	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

int	ft_check_char(char c, char *str, int to)
{
	int	i;

	i = 0;
	while (i < to)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc == 3)
	{
		str = ft_strcat(argv[1], argv[2]);
		i = 0;
		while (str[i] != '\0')
		{
			if (ft_check_char(str[i], str, i) == 0)
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
