/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:01:18 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/17 11:51:41 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	low;
	int	high;

	low = 0;
	high = 46350;
	if ((nb <= 0) || (nb > 2147395600))
		return (0);
	if (nb > 538240000)
	{
		while (high-- >= 23200)
		{
			if ((high * high) == nb)
				return (high);
		}
	}
	else
	{
		while (++low < 23200)
		{
			if ((low * low) == nb)
				return (low);
		}
	}
	return (0);
}
/*
int	main(void)
{
	int nb = 1;
	printf(" %d " ,ft_sqrt(nb));
}*/
