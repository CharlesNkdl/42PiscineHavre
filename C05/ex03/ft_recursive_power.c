/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:43:46 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/14 20:25:37 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb = (nb * ft_recursive_power(nb, power - 1)));
	else
		return (nb);
}
/*
int	main(void)
{
	int nb = 5;
	int power = 4;
	printf(" %d ", ft_recursive_power(nb, power));
}*/
