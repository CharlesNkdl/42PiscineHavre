/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:33:37 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/16 17:26:12 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	printing(int array[10][10]);
void	populate(int array[10][10]);

int	isgood_line(int grid[10][10], int row, int col)
{
	int	i;
	int	j;

	i = -1;
	while (++i < row)
	{
		if (grid[i][col] == 1)
			return (0);
	}
	i = row + 1;
	j = col + 1;
	while (--i >= 0 && --j >= 0)
	{
		if (grid[i][j] == 1)
			return (0);
	}
	i = row + 1;
	j = col - 1;
	while (--i >= 0 && ++j < 10)
	{
		if (grid[i][j] == 1)
			return (0);
	}
	return (1);
}

int	queenplace(int grid[10][10], int row, int *count)
{
	int	col;

	col = -1;
	if (row == 10)
	{
		printing(grid);
		*count += 1;
		return (1);
	}
	while (++col < 10)
	{
		if (isgood_line(grid, row, col) == 1)
		{
			grid[row][col] = 1;
			queenplace(grid, row + 1, count);
			grid[row][col] = 0;
		}
	}
	return (0);
}

void	populate(int array[10][10])
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < 10)
	{
		while (++j < 10)
		{
			array[i][j] = 0;
		}
		j = -1;
	}
}

void	printing(int array[10][10])
{
	int		row;
	int		col;
	char	res;

	row = -1;
	col = -1;
	while (++row < 10)
	{
		while (++col < 10)
		{
			if (array[row][col] == 1)
			{
				res = col + 48;
				write(1, &res, 1);
			}
		}
		col = -1;
	}
	write(1, "\n", 1);
}

int	ft_ten_queens_puzzle(void)
{
	int	array[10][10];
	int	row;
	int	col;
	int	count;

	count = 0;
	row = 0;
	col = 0;
	populate(array);
	queenplace(array, row, &count);
	return (count);
}
/*
int	main(void)
{
	printf("%d",ft_ten_queens_puzzle());
}*/
