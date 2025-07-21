/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:21:26 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/18 12:35:57 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	if (!src)
		return (dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	*src = "World";
	char	dest[50] = "Hello";
	char	*src_1 = "World";
	char	dest_1[50] = "Hello";

	printf("Original: %s\n", strncat(dest, src, 15));
	printf("Propia: %s\n", ft_strncat(dest_1, src_1, 15));
	return (0);
}
*/
