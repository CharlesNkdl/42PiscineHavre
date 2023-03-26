/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:59:40 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/12 21:59:44 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GTL.h"

void	copy_four(int arr[6][6], int tampon[6][6])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < 6)
	{
		while (j < 6)
		{
			if (tampon[i][j] == 4)
				arr[i][j] = tampon[i][j];
			j++;
		}
		j = 1;
		i++;
	}
}

void	check_prime(int arr[6][6], int tampon[6][6])
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	check = 0;
	while ((++i) < 6 - 1)
	{
		while ((++j) < 6 - 1)
		{
			if (arr[i][j] == 0)
			{
				ft_check_rowprime(tampon, i, j);
				check += ft_check_modulo(tampon, arr, i, j);
				ft_check_columnsprime(tampon, i, j);
				check += ft_check_modulo(tampon, arr, i, j);
				copy(arr, tampon);
			}
		}
		j = 0;
	}
	if (check >= 1)
		check_prime(arr, tampon);
}
/*decremente de chiffre premier le tampon en rangee*/

void	ft_check_rowprime(int tampon[6][6], int i, int j)
{
	int	q;

	tampon[i][j] = 23;
	q = j;
	while ((--q) > 0)
	{
		if (tampon [i][q] != 0 && tampon[i][q] != 4)
		{
			tampon[i][j] -= ft_decrem_prime(tampon[i][q], tampon[i][j]);
		}
	}
	q = j;
	while ((++q) < 6 - 1)
	{
		if (tampon [i][q] != 0 && tampon[i][q] != 4)
		{
			tampon[i][j] -= ft_decrem_prime(tampon[i][q], tampon[i][j]);
		}
	}
}
/*decremente de chiffre premier le tampon en colonne*/

void	ft_check_columnsprime(int tampon[6][6], int i, int j)
{
	int	q;

	q = i;
	while ((--q) > 0)
	{
		if (tampon [q][j] != 0 && tampon[q][j] != 4)
			tampon[i][j] -= ft_decrem_prime(tampon[q][j], tampon[i][j]);
	}
	q = i;
	while ((++q) < 6 - 1)
	{
		if (tampon [q][j] != 0 && tampon[q][j] != 4)
			tampon[i][j] -= ft_decrem_prime(tampon[q][j], tampon[i][j]);
	}
}

int	ft_decrem_prime(int tampon, int repere)
{
	if (tampon == 1 && repere != 18)
		return (5);
	if (tampon == 2 && repere != 16)
		return (7);
	if (tampon == 3 && repere != 12)
		return (11);
	return (0);
}
