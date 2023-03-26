/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaigle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:23:07 by llaigle           #+#    #+#             */
/*   Updated: 2023/03/12 23:30:25 by llaigle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GTL.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	set_tab_0(int array[6][6])
{
	int	row;
	int	col;

	row = -1;
	while (++row < 6)
	{
		col = -1;
		while (++col < 6)
		{
			array[row][col] = 0;
		}
	}
}

int	verif_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
		i ++;
	if (i != 31)
		return (0);
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] != ' ' && i % 2 == 1)
			return (0);
		if ((argv[1][i] < '1' || argv[1][i] > '4') && i % 2 == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	array[6][6];

	if (argc == 2 && verif_argv(argv) == 1)
	{
		set_tab_0(array);
		get_col_clues(argv[1], array);
		get_row_clues(argv[1], array);
	}
	else
	{
		ft_putstr("error");
	}
	premier(array);
	return (0);
}
