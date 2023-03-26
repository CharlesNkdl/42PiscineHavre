/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:44:58 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/04 14:49:22 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_lowercase(char str);

char	*ft_strupcase(char *str)
{
	int	check;
	int	count;

	count = 0;
	check = 0;
	while (str[count] != '\0')
	{
		check = ft_str_is_lowercase(str[count]);
		if (check == 1)
			str[count] -= 32;
		count++;
	}
	return (str);
}

int	ft_str_is_lowercase(char str)
{
	int	check;

	check = 1;
	if ((str >= 97 && str <= 122) && (check == 1))
		check = 1;
	else
		check = 0;
	return (check);
}
/*int	main(void)
{
	char c[] = "fasdfasfale42 culfsda42af OU"
	ft_strupcase(c);
	printf("%s", c);
}*/
