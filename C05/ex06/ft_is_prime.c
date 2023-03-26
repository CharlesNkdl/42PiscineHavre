/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:09:44 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/14 20:23:45 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div <= nb / div)
	{
		if ((nb % div) == 0)
			return (0);
		div++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(2147483646));
}*/	
