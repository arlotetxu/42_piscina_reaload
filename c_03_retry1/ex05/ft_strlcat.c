/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:56:08 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/18 09:53:07 by joflorid         ###   ########.fr       */
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

/*
	- If size <= 0, return src_len
	- If dest_len >= size, there is no space to write so return (size + src_len)
		that is what would be copied.
	- Final return is what the function would copied
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = ft_strlen(src);
	if (size <= 0)
		return (src_len);
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if ((dest_len + i) < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
int	main(void)
{
	//char	*src = "Hello";
	//char	dest[10] = " Mundo";
	char	*src_1 = "Hello";
	char	dest_1[15] = "World";

	//printf("Original: %i\n", strlcat(dest, src, 10));
	printf("Propia: %i\n", ft_strlcat(dest_1, src_1, 6));
	return (0);
}
*/
