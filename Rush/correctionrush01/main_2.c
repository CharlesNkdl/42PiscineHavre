/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaigle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:28:28 by llaigle           #+#    #+#             */
/*   Updated: 2023/03/12 23:29:14 by llaigle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GTL.h"

void	get_col_clues(char *str, int array[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (++i < 5)
	{
		array[0][i] = str[j] - '0';
		j += 2;
	}
	j = 8;
	i = 0;
	while (++i < 5)
	{
		array[5][i] = str[j] - '0';
		j += 2;
	}
}

void	get_row_clues(char *str, int array[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 16;
	while (++i < 5)
	{
		array[i][0] = str[j] - '0';
		j += 2;
	}
	j = 24;
	i = 0;
	while (++i < 5)
	{
		array[i][5] = str[j] - '0';
		j += 2;
	}
}
