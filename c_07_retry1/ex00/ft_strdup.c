/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:06:40 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/25 12:23:20 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(src);
	dest = malloc(size + 1);
	if (!dest)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src = "Esto es una prueba de funcionamiento";
	char	*dest;

	dest = ft_strdup(src);
	printf("Cadena destino: %s\n", dest);
	printf("Funcion original: %s\n", strdup(src));
	return (0);
}
 */
