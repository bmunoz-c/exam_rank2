/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:54:11 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/18 17:00:29 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_num(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;

	len = len_num(nbr);
	if (nbr == 0)
	{
		res = malloc(sizeof(char) * 2);
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	if (nbr < 0)
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	res[len] = '\0';
	len--;
	while (nbr)
	{
		res[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (res);
}
