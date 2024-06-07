/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:56:43 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/07 21:15:13 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int		start;
	int		end;
	int		i;
	int		last_word;
	char	*str;

	if (ac == 2)
	{
		str = av[1];
		i = ft_strlen(str) - 1;
		while (i >= 0)
		{
			last_word = 0; // por defecto no estoy al final

			// Me salto el espacio o similares
			if (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
				i--;
			// Me guardo el final de la palabra
			end = i;
			// Itero hasta espacio o similar para encontrar el inicio de palabra
			while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
				i--;
			start = i + 1;
			// flag para saber luego si estoy al final
			if (start == 0)
				last_word = 1;
			// imprimo palabra
			while (start <= end)
			{
				write(1, &str[start], 1);
				start++;
			}
			// imprimo espacio si no estoy al final
			if (last_word == 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
			int j = start;
			while (j <= end)
			{
				write(1, &str[j], 1);
				j++;
			}
			if (start != 0) // Estamos en el final?
				write(1, " ", 1);
*/
