/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:12:25 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/07 18:40:27 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str += 1;
		count++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	countwo;
	int	check;

	count = 0;
	countwo = 0;
	check = 0;
	if (str[count] == '\0' && to_find[count] == '\0')
		return (&str[count]);
	if (to_find[count] == '\0')
		return (&str[count]);
	while (str[count])
	{
		countwo = 0;
		check = 0;
		while (to_find[countwo] == str[count + countwo])
		{
			check ++;
			countwo ++;
			if (check == ft_strlen(to_find))
				return (&str[count]);
		}
		count++;
	}
	return (NULL);
}
/*int	main(void)
{
	char str[] = "fsdf";
	char to_find[] = "";

	printf("mienne :%s\n",ft_strstr(str,to_find));
	printf("vrai:%s\n",strstr(str,to_find));
}*/
