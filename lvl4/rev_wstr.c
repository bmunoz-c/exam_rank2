/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:10:58 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/13 19:13:08 by bmunoz-c         ###   ########.fr       */
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

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
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
		j = ft_strlen(str);
		while (j >= 0)
		{
			if (str[j] == ' ')
			{
				i = j + 1;
				while (str[i] != '\0' && str[i] != ' ')
				{
					write(1, &str[i], 1);
					i++;
				}
				write(1, " ", 1);
			}
			j--;
			i++;
		}
		i = 0;
		while (str[i] && str[i] != ' ')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
