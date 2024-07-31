/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:47:39 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/07/31 18:18:23 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	num_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;

	len = num_len(nbr);
	res = malloc(sizeof(char) * len + 1);
	res[len] = '\0';
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	while (nbr && len > 0)
	{
		res[--len] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	int	n = -42;
	char *res = ft_itoa(n);
	printf("%s\n", res);
	return (0);
}*/
