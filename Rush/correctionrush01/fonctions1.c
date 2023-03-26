/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:59:12 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/12 22:24:06 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GTL.h"

int	check_final_l(int arr[6][6])
{
	int	somme;
	int	check;
	int	i;
	int	j;

	i = 0;
	j = 0;
	somme = 0;
	check = 0;
	while (++i < 6 - 1)
	{
		while (++j < 6 - 1)
		{
			if (arr[i][j] == 0)
				return (0);
			somme = somme + arr[i][j];
			if (somme == 10)
				check++;
		}
		j = 0;
		somme = 0;
	}
	return (check / 4);
}

int	check_final_c(int arr[6][6])
{
	int	somme;
	int	check;
	int	i;
	int	j;

	i = 0;
	j = 0;
	somme = 0;
	check = 0;
	while (++j < 6 - 1)
	{
		while (++i < 6 - 1)
		{
			if (arr[i][j] == 0)
				return (0);
			somme = somme + arr[i][j];
			if (somme == 10)
				check++;
		}
		i = 0;
		somme = 0;
	}
	return (check / 4);
}

void	hypotest1(int tamp[6][6])
{
	if (tamp[2][2] == 0)
		tamp[2][2] = 2;
}

void	hypotest2(int tamp[6][6])
{
	if (tamp[2][3] == 0)
		tamp[2][3] = 2;
}

void	hypotest3(int tamp[6][6])
{
	if (tamp[3][2] == 0)
		tamp[3][2] = 2;
}
