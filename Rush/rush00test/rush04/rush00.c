/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:07:49 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/04 12:08:00 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"

void    ft_space(int x);
void    ft_line_break(void);

int	ft_height(int x, int y)
{
	int		count;
	char	pip;
	
	pip = '|';
	count = 0;
	if (y <= 2)
	{
		return (0);
	}
	else 
	{
		while (count != (y-2))
		{
			ft_putchar(pip);
			ft_space(x);
			if (x >= 2)
			{
				ft_putchar(pip);
			}
			ft_line_break();
			count ++;
		}
	}
	return (0);
}

void	ft_line_break(void)
{
	write(1, "\n", 1);
}

int	ft_width(int x, int y)
{
	int	count;
	
	count = 0;
	if (y == 0)
	{
		return(0);
	}
	while (count != x)
	{
		if ((count == 0) || (count == x-1))
		{
			ft_putchar('o');
			if (count == x-1)
				ft_line_break();
		}
		else
		{
			ft_putchar('-');
		}
		count++;
	}
	return(0);
}
void	ft_space(int x)
{
	int i;

	i = 2;
	if (x >= 3)
	{
		while( i != x)
		{
			ft_putchar(32);
			i++;
		}
	}
}
void	rush(int x, int y)
{
	ft_width(x,y);
	ft_height(x,y);
	if (x != 1)
	{
		ft_width(x,y);
	}
	
}
