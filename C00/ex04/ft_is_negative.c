/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:21:58 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/01 11:08:57 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	ne;

	p = 'P';
	ne = 'N';
	if (n >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &ne, 1);
	}
}