/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:04:51 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/16 14:15:59 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if ((str[i] >= 97 && str[i] <= 122)
			&& (str[i - 1] == 32 || str[i -1] == 9
				|| (str[i - 1] >= 33 && str[i -1] <= 47)))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "Vx!V.Yktnp[p Z1uncw(Q$";
	printf("Cadena original: %s\n", str);
	printf("Cadena modificada: %s\n", ft_strcapitalize(str));
	return (0);
}

*/
