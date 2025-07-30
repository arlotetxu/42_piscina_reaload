/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joflorid <joflorid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:55:21 by joflorid          #+#    #+#             */
/*   Updated: 2025/07/29 12:44:21 by joflorid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(src);
	dest = malloc(size + 1);
	if (!dest)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*my_array;
	int			i;

	my_array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!my_array)
	{
		my_array = NULL;
		return (my_array);
	}
	i = -1;
	while (++i < ac)
	{
		my_array[i].size = ft_strlen(av[i]);
		my_array[i].str = av[i];
		my_array[i].copy = ft_strdup(av[i]);
	}
	my_array[i].str = 0;
	return (my_array);
}

//=================================================================

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	ft_putchar(c);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].copy != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putstr("---\n");
		i++;
	}
}

//================================================================

// Función para liberar la memoria
void	free_tab(struct s_stock_str *tab)
{
	int	i;

	if (!tab)
		return;
	i = 0;
	while (tab[i].str != 0)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
}


// MAIN PARA PROBAR
int	main(int argc, char **argv)
{
	t_stock_str	*tab;

	// Crear un array de prueba si no hay argumentos
	if (argc == 1)
	{
		char *test_args[] = {"Hola", "Mundo", "Prueba", "42"};
		tab = ft_strs_to_tab(4, test_args);

		if (tab)
		{
			ft_putstr("=== PRUEBA CON ARGUMENTOS PREDEFINIDOS ===\n");
			ft_show_tab(tab);
			free_tab(tab);
		}
		else
		{
			ft_putstr("Error: No se pudo crear la tabla\n");
		}
	}
	else
	{
		// Usar argumentos de línea de comandos (excluyendo argv[0])
		tab = ft_strs_to_tab(argc - 1, argv + 1);

		if (tab)
		{
			ft_putstr("=== ARGUMENTOS DE LINEA DE COMANDOS ===\n");
			ft_show_tab(tab);
			free_tab(tab);
		}
		else
		{
			ft_putstr("Error: No se pudo crear la tabla\n");
		}
	}

	// Pruebas adicionales
	ft_putstr("\n=== PRUEBAS ADICIONALES ===\n");

	// Prueba con strings vacíos y especiales
	char *special_test[] = {"", "a", "Hello World!", "123456789"};
	tab = ft_strs_to_tab(4, special_test);

	if (tab)
	{
		ft_putstr("Prueba con strings especiales:\n");
		ft_show_tab(tab);
		free_tab(tab);
	}

	ft_putstr("\nPrograma terminado correctamente.\n");
	return (0);
}
