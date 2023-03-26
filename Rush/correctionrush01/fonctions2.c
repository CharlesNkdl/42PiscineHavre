/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:59:19 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/12 22:24:52 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GTL.h"

void	hypotest4(int tamp[6][6])
{
	if (tamp[3][3] == 0)
		tamp[3][3] = 2;
}

void	ft_logiccol(int array[6][6])
{
	int	i;

	i = 0;
	while ((++i) < 6)
	{
		if (array[i][0] == 1)
		{
			array[i][1] = 4;
			if (array[i][6 - 1] == 2)
				array[i][6 - 2] = 3;
		}
		if (array[i][6 - 1] == 1)
		{
			array[i][6 - 2] = 4;
			if (array[i][0] == 2)
				array[i][1] = 3;
		}
		if (array[i][0] == 3 && array[i][6 - 1] == 2)
			array[i][6 - 3] = 4;
		else if (array[i][0] == 2 && array[i][6 - 1] == 3)
			array[i][6 - 4] = 4;
		if ((array[i][0] == 4) || (array[i][6 - 1] == 4))
			ft_writelogcol(array, i);
	}
}
/*ecrire quand 4 sur colonne*/

void	ft_writelogcol(int array[6][6], int i)
{
	int	four;

	four = 1;
	if (array[i][0] == 4)
	{
		while (four != 6 - 1)
		{
			array[i][four] = four;
			four ++;
		}
	}
	else if (array[i][6 - 1] == 4)
	{
		while (four != 6 - 1)
		{
			array[i][6 - 1 - four] = four;
			four ++;
		}
	}
}
/* inferences logiques sur ligne */

void	ft_logicrow(int array[6][6])
{
	int	j;

	j = 0;
	while ((++j) < 6)
	{
		if (array[0][j] == 1)
		{
			array[1][j] = 4;
			if (array[6 - 1][j] == 2)
				array[6 - 2][j] = 3;
		}
		if (array[6 - 1][j] == 1)
		{
			array[6 - 2][j] = 4;
			if (array[0][j] == 2)
				array[1][j] = 3;
		}
		if (array[0][j] == 3 && array[6 - 1][j] == 2)
			array[6 - 3][j] = 4;
		else if (array[0][j] == 2 && array[6 - 1][j] == 3)
			array[6 - 4][j] = 4;
		if (array[0][j] == 4 || array[6 - 1][j] == 4)
			ft_writelogrow(array, j);
		j++;
	}
}
/* ecrire quand 4 dans les lignes*/

void	ft_writelogrow(int array[6][6], int j)
{
	int	four;

	four = 1;
	if (array[0][j] == 4)
	{
		while (four != 6 - 1)
		{
			array[four][j] = four;
			four ++;
		}
	}
	else if (array[6 - 1][j] == 4)
	{
		while (four != 6 - 1)
		{
			array[6 - 1 - four][j] = four;
			four ++;
		}
	}
}
