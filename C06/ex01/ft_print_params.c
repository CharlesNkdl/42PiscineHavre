/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:40:08 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/09 17:59:11 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i != (argc - 1))
	{
		ft_putstr(argv[++i]);
		write(1, "\n", 1);
	}
	return (0);
}
