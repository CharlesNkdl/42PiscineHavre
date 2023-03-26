/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:44:35 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/03 12:18:14 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_alpha(char *str)
{
	int	check;

	check = 1;
	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122) || (*str >= 65 && *str <= 90))
		{
			if (check == 1)
			{
				check = 1;
			}
		}
		else
			check = 0;
		str += 1;
	}
	return (check);
}
/*int main(void)
{
	char    str[] = "auoiau1651516516516165651oiauoi";
        char    stre[] = "ads";
        char    stren[] = "";
        char    strenl[] = "DFFDW2";


        printf(" %d ",ft_str_is_alpha(str));
        printf(" %d ",ft_str_is_alpha(stre));
        printf(" %d ", ft_str_is_alpha(stren));
        printf(" %d ", ft_str_is_alpha(strenl));
}*/
