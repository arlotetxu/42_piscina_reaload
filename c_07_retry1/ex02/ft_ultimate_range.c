/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:22:03 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/25 10:35:13 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
		return (*range = NULL, 0);
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = -1;
	while (++i < size)
	{
		(*range)[i] = min;
		min++;
	}
	return (size);
}

/* int main(void)
{
	int *array;
	int size;
	int i;

	size = ft_ultimate_range(&array, 15, 10);
	if (size == -1)
	{
		printf("Error de malloc\n");
		return (1);
	}
	printf("Tamaño: %d\n", size);
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
	free(array);
	return (0);
} */
