/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:54:14 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/11 22:31:16 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	main(int ac, char **av)
{
	int	i;
	char	*str;

	if(ac == 2)
	{
		str = av[1];
		while (is_space(*str))
			str++;
		i = 0;
		while (str[i])
		{
			if (str[i] != ' ')
			{
				if (str[i - 1] == ' ' && i > 0)
					write(1, "   ", 3);
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
