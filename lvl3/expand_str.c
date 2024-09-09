/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:24:11 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/04 19:40:49 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_strlen(char *str)
{
	int	i = 0;

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
		while (is_space(str[i]))
			i++;
		while (is_space(str[j]))
			j--;
		while (i <= j)
		{
			while (is_space(str[i]))
			{
				if (!is_space(str[i + 1]))
					write(1, "   ", 3);
				i++;
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
