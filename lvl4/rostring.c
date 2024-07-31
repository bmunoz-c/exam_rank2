/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:19:57 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/07/24 22:06:31 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_w(char *str)
{
	int	i = 0;
	int	count = 0;

	while (str[i])
	{
		if (is_space(str[i]) && !is_space(str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	start;
	char	*str;

	if (ac >= 2)
	{
		str = av[1];
		i = 0;
		j = ft_strlen(str) - 1;
		while (is_space(str[i]))
		{
			i++;
			start = i;
		}
		while (is_space(str[j]))
			j--;
		while (!is_space(str[i]))
			i++;
		i++;
		while (i <= j)
		{
			while (is_space(str[i]) && is_space(str[i + 1]))
				i++;
			write(1, &str[i], 1);
			i++;
		}
		if (count_w(str) > 1)
			write (1, " ", 1);
		while (start <= j)
		{
			if(!is_space(str[start]))
				write(1, &str[start], 1);
			else
				break ;
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

