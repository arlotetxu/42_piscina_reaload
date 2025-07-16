/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:49:12 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/16 11:39:22 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len])
		len++;
	if (size > len + 1)
	{
		i = -1;
		while (src[++i] != '\0')
			dest[i] = src[i];
	}
	else
	{
		i = -1;
		while (++i < size -1)
			dest[i] = src[i];
	}
	dest[i] = '\0';
	return (len);
}

/*
int	main(void)
{
	char	*src= "Probando probando";
	char	dest[30];

	//printf("Rresultado original: %u\n", strlcpy(dest, src, 5));
	printf("Rresultado propia: %u\n", ft_strlcpy(dest, src, 5));
	printf("Cadena dest: %s\n", dest);
	return (0);
}
*/
