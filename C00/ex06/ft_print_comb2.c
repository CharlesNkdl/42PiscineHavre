/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:06:38 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/01 19:52:14 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writeall(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != 57 || b != 56)
	{
		write(1, ", ", 2);
	}
}

void	numb_calc(int count, int count_two)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;
	d += count % 10;
	c += (count / 10) % 10;
	b += count_two % 10;
	a += (count_two / 10) % 10;
	writeall(a, b, c, d);
}

void	ft_print_comb2(void)
{
	int		count;
	int		count_two;

	count_two = 0;
	count = 0;
	while (count_two != 98)
	{
		count++;
		if (count == 100)
		{
			count_two++;
			count = count_two + 1;
		}
		numb_calc(count, count_two);
	}
}
