/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:06:51 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/02 14:16:43 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	writeall(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = 48;
	d = 49;
	u = 50;
	while (c != 56)
	{
		writeall(c, d, u);
		u++;
		if (u == 58)
		{
			d++;
			if (d == 57)
			{
				c++;
				d = d + c + 2 - 58;
			}
			u = u + d + 1 - 58;
		}
	}
}
