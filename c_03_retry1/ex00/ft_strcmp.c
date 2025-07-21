/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:58:07 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/16 15:10:44 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
	char	*cad_1 = "Esto";
	char	*cad_2 = "Est";

	printf("Original: %i\n", strcmp(cad_1, cad_2));
	printf("Propia: %i\n", ft_strcmp(cad_1, cad_2));
	return (0);
}
*/
