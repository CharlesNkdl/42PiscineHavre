/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:29:37 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/13 18:32:59 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	stock;

	stock = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
	{
		return (nb);
	}
	while (power != 1)
	{
		if (stock == 0)
			stock = nb * nb;
		else
			stock *= nb;
		power--;
	}
	return (stock);
}
/*
int	main(void)
{
	int a = 5;
	int b = 4;

	printf(" %d",ft_iterative_power(a, b));
}*/
