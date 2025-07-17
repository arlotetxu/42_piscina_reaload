/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:21:26 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/17 10:46:04 by joflorid         ###   ########.fr       */
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
	return (dest);
}
/*
int	main(void)
{
	char	*src = "Esto es src. ";
	char	dest[50] = "Esto es dest.";
	char	*src_1 = "Esto es src. ";
	char	dest_1[50] = "Esto es dest.";

	printf("Original: %s\n", strncat(dest, src, 1));
	printf("Propia: %s\n", ft_strncat(dest_1, src_1, 1));
	return (0);
}
*/
