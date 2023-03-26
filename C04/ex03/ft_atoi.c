/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:42:28 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/13 17:46:33 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	countsignneg;
	int	result;

	count = 0;
	countsignneg = 1;
	result = 0;
	while ((str[count] >= 9 && str[count] <= 13) || (str[count] == 32))
		count++;
	while (str[count] == 45 || str[count] == 43)
	{
		if (str[count] == 45)
			countsignneg *= -1;
		count ++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		result = result * 10 + (str[count] - 48);
		count ++;
	}
	return (result * countsignneg);
}
/*

int	main(void)
{
	char	str[] = "       -----+-----2147487adasdad";
	
	printf("%d", ft_atoi(str));
}*/
