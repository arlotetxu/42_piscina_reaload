/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:56:08 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/17 15:41:51 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	if (size <= 0)
		return (ft_strlen(src));
	if (dest_len >= size)
		return (size + ft_strlen(src));
	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
int	main(void)
{
	//char	*src = "Hello";
	//char	dest[10] = " Mundo";
	char	*src_1 = "Hello";
	char	dest_1[15] = "World";

	//printf("Original: %i\n", strlcat(dest, src, 10));
	printf("Propia: %i\n", ft_strlcat(dest_1, src_1, 5));
	return (0);
}
*/
