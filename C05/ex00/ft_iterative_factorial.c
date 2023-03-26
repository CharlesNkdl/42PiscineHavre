/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:01:53 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/14 20:34:00 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (i < temp)
	{
		nb *= i;
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	int nb = 5;
	printf(" %d ",ft_iterative_factorial(nb));
}*/
