/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:59:30 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/12 22:25:37 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GTL.h"

void	copy(int arr[6][6], int tampon[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i != 6)
	{
		while (j != 6)
		{
			tampon[i][j] = arr[i][j];
			j++;
		}
		j = 0;
		i++;
	}
}
/* transformer le tampon 0 = 4 */

void	zero_is_four(int tampon[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((++i) < 6 - 1)
	{
		while ((++j) < 6 - 1)
		{
			if (tampon[i][j] == 0)
				tampon[i][j] = 4;
		}
		j = 0;
	}
}

void	crosscheck_four(int tampon[6][6], int arr[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((++i) < 6 - 1)
	{
		while ((++j) < 6 - 1)
		{
			if (arr[i][j] == 4)
			{
				ft_check_row(tampon, i, j);
				ft_check_columns(tampon, i, j);
			}
		}
		j = 0;
	}
}
/*on decremente de 1 les 4 alignes avec les positions des vrais 4 dans le jeu*/

void	ft_check_row(int tampon[6][6], int i, int j)
{
	int	q;

	q = j - 1;
	while (q > 0)
	{
		if (tampon [i][q] == 4)
			tampon[i][q] -= 1;
		q--;
	}
	q = j + 1;
	while (q < 6 - 1)
	{
		if (tampon[i][q] == 4)
			tampon[i][q] -= 1;
		q++;
	}
}

void	ft_check_columns(int tampon[6][6], int i, int j)
{
	int	q;

	q = i - 1;
	while (q > 0)
	{
		if (tampon[q][j] == 4)
			tampon[q][j] -= 1;
		q--;
	}
	q = i + 1;
	while (q < 6 - 1)
	{
		if (tampon[q][j] == 4)
			tampon[q][j] -= 1;
		q++;
	}
}
