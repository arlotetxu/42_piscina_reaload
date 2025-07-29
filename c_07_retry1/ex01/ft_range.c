/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:44:08 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/25 12:23:45 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	size = max - min;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

/*
int	main(void)
{
	int	*arr;
	int	i;

	i = 0;
	arr = ft_range(10, 25);
	if (arr == NULL)
		return (printf("Puntero NULL\n"), 0);
	while (i <= 14)
	{
		printf("%i\n", arr[i]);
		i++;
	}
	return (0);
}
*/
