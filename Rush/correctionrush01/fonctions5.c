/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:59:55 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/12 21:59:56 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GTL.h"

int	ft_check_modulo(int tampon[6][6], int arr[6][6], int i, int j)
{
	if (tampon[i][j] % 5 == 0)
	{
		arr[i][j] = 1;
		return (1);
	}
	if (tampon[i][j] % 7 == 0)
	{
		arr[i][j] = 2;
		return (1);
	}
	if (tampon[i][j] % 11 == 0)
	{
		arr[i][j] = 3;
		return (1);
	}
	return (0);
}

int	premier(int array[6][6])
{
	int	tampon[6][6];
	int	tampon2[6][6];

	ft_logiccol(array);
	ft_logicrow(array);
	copy(array, tampon);
	zero_is_four(tampon);
	crosscheck_four(tampon, array);
	copy_four(array, tampon);
	copy(array, tampon);
	check_prime(array, tampon);
	if ((check_final_c(array) + check_final_l(array)) == 2)
	{
		ft_finished(array);
		return (1);
	}
	ft_runtest1(array, tampon, tampon2);
	ft_runtest2(array, tampon, tampon2);
	ft_runtest3(array, tampon, tampon2);
	ft_runtest4(array, tampon, tampon2);
	ft_runtest5(array, tampon, tampon2);
	ft_runtest6(array, tampon, tampon2);
	return (0);
}

void	ft_runtest6(int array[6][6], int tampon[6][6], int tampon2[6][6])
{
	copy(array, tampon);
	copy(array, tampon2);
	hypotest4(tampon2);
	hypotest4(tampon);
	hypotest1(tampon2);
	hypotest1(tampon);
	check_prime(tampon2, tampon);
	if ((check_final_c(tampon) + check_final_l(tampon)) == 2)
	{
		copy(tampon2, array);
		ft_finished(array);
	}
}

int	ft_finished(int array[6][6])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	c = '0';
	while (++i < 6 - 1)
	{
		while (++j < 6 - 1)
		{
			c += array[i][j];
			write(1, &c, 1);
			c = '0';
		}
		write(1, "\n", 1);
		j = 0;
	}
	return (0);
}
