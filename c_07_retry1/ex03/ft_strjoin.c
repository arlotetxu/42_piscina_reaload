/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:32:36 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/28 13:38:25 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*res;

	if (size == 0)
		return (res = malloc(sizeof(char)));
	total_len = 0;
	i = -1;
	while (++i < size)
		total_len += ft_strlen(strs[i]);
	total_len += (ft_strlen(sep) * (size - 1) + 1);
	res = malloc(total_len);
	if (!res)
		return (NULL);
	*res = '\0';
	i = -1;
	while (++i < size)
	{
		res = ft_strcat(res, strs[i]);
		if (i < size -1)
			res = ft_strcat(res, sep);
	}
	return (res);
}

/* int	main(void)
{
	char	*cad[] = {"Cadena 1", "Cadena 2555", "Cadena final///",
		"Otra cadena"};
	char	*sep = " - ";
	char	*res;
	int		i;

	res = ft_strjoin(0, &*cad, sep);
	//printf("Resultado: %s\n", res);
	i = 0;
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	free(res);
	return (0);
} */
