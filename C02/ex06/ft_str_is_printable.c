/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:32:40 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/03 12:40:34 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_printable(char *str)
{
	int	check;

	check = 1;
	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 126) && (check == 1))
			check = 1;
		else
			check = 0;
		str += 1;
	}
	return (check);
}
/*int main(void)
{
        char    str[] = "auoiauoiauoi";
        char    stre = 31;
        char    stren[] = "";
        char    strenl[] = "\0";

        printf(" %d ",ft_str_is_printable(str));
        printf(" %d ",ft_str_is_printable(&stre));
        printf(" %d ", ft_str_is_printable(stren));
        printf(" %d ", ft_str_is_printable(strenl));
}*/
