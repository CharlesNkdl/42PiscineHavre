/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   premier.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:32:54 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/12 23:19:17 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "GTL.h"

void	ft_runtest1(int array[6][6], int tampon[6][6], int tampon2[6][6])
{
	copy(array, tampon);
	copy(array, tampon2);
	hypotest1(tampon);
	hypotest1(tampon2);
	check_prime(tampon2, tampon);
	if ((check_final_c(tampon2) + check_final_l(tampon2)) == 2)
	{
		copy(tampon2, array);
		ft_finished(array);
	}
}

void	ft_runtest2(int array[6][6], int tampon[6][6], int tampon2[6][6])
{
	copy(array, tampon);
	copy(array, tampon2);
	hypotest2(tampon2);
	hypotest2(tampon);
	check_prime(tampon2, tampon);
	if ((check_final_c(tampon2) + check_final_l(tampon2)) == 2)
	{
		copy(tampon2, array);
		ft_finished(array);
	}
}

void	ft_runtest3(int array[6][6], int tampon[6][6], int tampon2[6][6])
{
	copy(array, tampon);
	copy(array, tampon2);
	hypotest3(tampon2);
	hypotest3(tampon);
	check_prime(tampon2, tampon);
	if ((check_final_c(tampon2) + check_final_l(tampon2)) == 2)
	{
		copy(tampon2, array);
		ft_finished(array);
	}
}

void	ft_runtest4(int array[6][6], int tampon[6][6], int tampon2[6][6])
{
	copy(array, tampon);
	copy(array, tampon2);
	hypotest4(tampon2);
	hypotest4(tampon);
	check_prime(tampon2, tampon);
	if ((check_final_c(tampon) + check_final_l(tampon)) == 2)
	{
		copy(tampon2, array);
		ft_finished(array);
	}
}

void	ft_runtest5(int array[6][6], int tampon[6][6], int tampon2[6][6])
{
	copy(array, tampon);
	copy(array, tampon2);
	hypotest2(tampon2);
	hypotest2(tampon);
	hypotest3(tampon2);
	hypotest3(tampon);
	check_prime(tampon2, tampon);
	if ((check_final_c(tampon) + check_final_l(tampon)) == 2)
	{
		copy(tampon2, array);
		ft_finished(array);
	}
}
