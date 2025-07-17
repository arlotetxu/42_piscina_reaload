/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:12:53 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/16 15:19:36 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char	*cad_1 = "Estoy";
	char	*cad_2 = "Estoyy";

	printf("Original: %i\n", strncmp(cad_1, cad_2, 14));
	printf("Propia: %i\n", ft_strncmp(cad_1, cad_2, 14));
	return (0);
}
*/
