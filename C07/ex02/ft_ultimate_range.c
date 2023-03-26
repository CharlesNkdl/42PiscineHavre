/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:18:47 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/20 16:22:03 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ranje;
	int	valeur;
	int	index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	index = 0;
	valeur = max - min;
	ranje = malloc((sizeof(int) * valeur));
	if (!ranje)
	{
		return (-1);
	}
	while (index < valeur)
	{
		ranje[index] = min + index;
		index++;
	}
	*range = ranje;
	return (index);
}
/*
int		main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -2, 10));
	while (i != 14)
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
