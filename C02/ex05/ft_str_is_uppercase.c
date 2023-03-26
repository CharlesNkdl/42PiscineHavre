/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:26:55 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/03 12:32:13 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_uppercase(char *str)
{
	int	check;

	check = 1;
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) && (check == 1))
			check = 1;
		else
			check = 0;
		str += 1;
	}
	return (check);
}
/*int main(void)
{
        char    str[] = "auoiauTiauoi";
        char    stre[] = "2542";
        char    stren[] = "";
	char	strenl[] = "QOUIE";
        printf(" %d ",ft_str_is_uppercase(str));
        printf(" %d ",ft_str_is_uppercase(stre));
        printf(" %d ", ft_str_is_uppercase(stren));
	printf(" %d ", ft_str_is_uppercase(strenl));
}*/
