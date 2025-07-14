/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:54:09 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/14 13:07:28 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	size--;
	while (i <= size)
	{
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
		i++;
		size--;
	}
}
