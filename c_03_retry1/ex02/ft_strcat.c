/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:20:11 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/17 10:18:34 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	if (!*src)
		return (dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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
	char	dest[50] = "Probando";
	char	*src = " Nuestro codigo";
	char	dest_1[50] = "Probando";
	char	*src_1 = " Nuestro codigo";

	printf("Original: %s\n", strcat(dest, src));
	printf("Propia: %s\n", ft_strcat(dest_1, src_1));
	return (0);
}
*/
