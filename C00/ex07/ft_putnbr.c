/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:23:37 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/13 14:22:37 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	temp;

	if (nb < 0)
	{
		ft_putchar('-');
		temp = nb * -1;
	}
	else
		temp = nb;
	if (temp >= 10)
		ft_putnbr(temp / 10);
	ft_putchar(temp % 10 + 48);
}
/*
int	main(void)
{
	int nb = 0;
	ft_putnbr(nb);
}*/
