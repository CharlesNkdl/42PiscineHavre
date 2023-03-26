/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:22:32 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/03 12:26:29 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	check;

	check = 1;
	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122) && (check == 1))
			check = 1;
		else
			check = 0;
		str += 1;
	}
	return (check);
}
/*int main(void)
{
	char	str[] = "auoiaToiauoi";
	char	stre[] = "254k2";
	char	stren[] = "";
	printf(" %d ",ft_str_is_lowercase(str));
	printf(" %d ",ft_str_is_lowercase(stre));
	printf(" %d ", ft_str_is_lowercase(stren));
}*/
