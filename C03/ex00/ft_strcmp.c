/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:39:09 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/07 12:22:48 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count_result;
	int	count_index;
	int	shortest;

	count_index = 0;
	count_result = 0;
	if (ft_strlen(s1) > ft_strlen(s2))
		shortest = ft_strlen(s2);
	else
		shortest = ft_strlen(s1);
	while (count_index <= shortest)
	{
		if ((s1[count_index] != s2[count_index]) && (count_result == 0))
			count_result += s1[count_index] - s2[count_index];
		count_index++;
	}
	return (count_result);
}
/*int	main(void)
{
	char* s1 = "245 ";
	char* s2 = "245";

	printf("vrai :%d \n",strcmp(s1 , s2));
	printf("mienne :%d \n",ft_strcmp(s1 , s2));
}*/
