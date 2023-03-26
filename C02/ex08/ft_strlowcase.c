/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:51:05 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/06 15:52:23 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_uppercase(char str);

char	*ft_strlowcase(char *str)
{
	int	check;
	int	count;

	check = 0;
	count = 0;
	while (str[count] != '\0')
	{
		check = ft_str_is_uppercase(str[count]);
		if (check == 1)
			str[count] += 32;
		count++;
	}
	return (str);
}

int	ft_str_is_uppercase(char str)
{
	int	check;

	check = 1;
	if ((str >= 65 && str <= 90) && (check == 1))
		check = 1;
	else
		check = 0;
	return (check);
}
/*int	main(void)
{
	char c[] = "le4fg2h sghculDG4H2";
	ft_strlowcase(c);
	printf("%s", c);
}*/
