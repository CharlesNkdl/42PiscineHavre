/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:18:50 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/03 12:21:50 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_numeric(char *str)
{
	int	check;

	check = 1;
	while (*str != '\0')
	{
		if (((*str >= 48 && *str <= 57)) && (check == 1))
			check = 1;
		else
			check = 0;
		str += 1;
	}
	return (check);
}
/*int main(void)
{
	char    str[] = "auoiau1651516516516165651oiauoi";
        char    stre[] = "1498449i8";
        char    stren[] = "";
        char    strenl[] = "\0";

        printf(" %d ",ft_str_is_numeric(str));
        printf(" %d ",ft_str_is_numeric(stre));
        printf(" %d ", ft_str_is_numeric(stren));
        printf(" %d ", ft_str_is_numeric(strenl));
}*/
