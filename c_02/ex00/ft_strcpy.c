/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:11:51 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/15 11:58:34 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src_1 = "Probando, Probando";
	char	dest_1[strlen(src_1 + 1)];
	char	dest_2[strlen(src_1) + 1];

	printf("Original: %s\n", strcpy(dest_1, src_1));
	printf("Propia: %s\n", ft_strcpy(dest_2, src_1));
	return (0);
}
*/
