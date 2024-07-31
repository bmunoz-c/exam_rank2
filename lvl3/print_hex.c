/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:13:15 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/07/06 20:41:22 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] > 9)
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (sign * res);
}

void	ft_printhexa(int n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n > 16)
		ft_printhexa(n / 16);
	write(1, &hexa[n % 16], 1);
}

int	main(int ac, char **av)
{
	int		i;
	int		nbr;
	char	*str;

	if (ac == 2)
	{
		i = 0;
		str = av[1];
//		if ((str[i] >= 'a' && str[i] <= 'z')
//			|| (str[i] >= 'A' && str[i] <= 'Z')
//			|| (str[i] == '-'))
//		{
//			write(1, "\n", 1);
//			return (1);
//		}
		nbr = ft_atoi(str);
		ft_printhexa(nbr);
	}
	write(1, "\n", 1);
	return (0);
}
