/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:01:09 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/09 21:29:38 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	valeur;
	int	index;

	if (min >= max)
		return (NULL);
	index = 0;
	valeur = max - min;
	range = malloc((sizeof(int) * valeur));
	if (!range)
		return (NULL);
	while (index < valeur)
	{
		range[index] = min + index;
		index++;
	}
	return (range);
}
/*
int	main(void)
{
	ft_range(-2,-1);
	
	//int i = 0;
	while (arr[i])
	{
		printf(" %d",arr[i]);
		i++;
	}
	//free(arr);
}*/
