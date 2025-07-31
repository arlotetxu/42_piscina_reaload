/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:28:57 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/31 11:37:56 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	*my_array;
	int	i;

	len = end - start + 1;
	if (end <= start)
		len = start - end + 1;
	my_array = malloc(sizeof(int) * len);
	if (!my_array)
		return (NULL);
	i = -1;
	if (start <= end)
	{
		while (++i < len)
		{
			my_array[i] = start;
			start++;
		}
	}
	else
		while (++i < len)
		{
			my_array[i] = start;
			start--;
		}
	return (my_array);
}

int	main(void)
{
	int	start;
	int	end;
	int	*my_array;
	int	i;

	start = -2;
	end = -7;
	my_array = ft_range(start, end);
	i = -1;
	while (++i < 6)
		printf("%i\n", my_array[i]);
	return (0);
}
