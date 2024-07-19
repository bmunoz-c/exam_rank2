/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:23:18 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/07/19 13:39:35 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int	*tab, unsigned int len)
{
	int	n;
	int	i;

	i = 0;
	n = tab[0];
	while (i < len)
	{
		if (n < tab[i])
			n = tab[i];
		i++;
	}
	return (n);
}
/*
int	main()
{
	int	tab[6] = { 1, 5, 7, 8, 2, 22 };

	printf("Largest Number: %d\n", max(tab, 6));
	return (0);
}*/
