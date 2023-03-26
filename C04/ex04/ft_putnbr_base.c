/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:23:37 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/13 17:48:56 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_true(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count ++;
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	temp;
	unsigned int	len;

	len = ft_strlen(base);
	if (check_true(base) == 1)
	{	
		if (nbr < 0)
		{
			ft_putchar('-');
			temp = nbr * -1;
		}
		else
			temp = nbr;
		if (temp >= (unsigned int)ft_strlen(base))
			ft_putnbr_base((temp / len), base);
		ft_putchar(base[temp % len]);
	}
}

int	check_true(char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}
/*
int	main(void)
{
	int nbr = 101405;
	char str[] = "01";
	ft_putnbr_base(nbr,str);
}*/
