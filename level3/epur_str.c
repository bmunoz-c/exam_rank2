/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:08:06 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/07 19:53:00 by bmunoz-c         ###   ########.fr       */
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
	int		i;
	int		j;
	char	*str;

	if (ac == 2)
	{
		i = 0;
		str = av[1];
		j = ft_strlen(str) - 1;

		while (j >= 0 && str[j] == ' ')
			j--;
		while (str[i] == ' ')
			i++;
		while (i <= j)
		{
			while (str[i] == ' ' && str[i + 1] == ' ')
				i++;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
	}
