/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:54:52 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/04 19:19:14 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_anum(char str)
{
	int	check;

	check = 0;
	if (str >= 48 && str <= 57)
		check = 1;
	if (str >= 97 && str <= 122)
		check = 1;
	if (str >= 65 && str <= 90)
		check = 1;
	return (check);
}

char	*ft_strcapitalize(char *str)
{
	int	next;
	int	count;

	next = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (ft_str_is_anum(str[count]) == 1 && next == 1)
		{
			if (str[count] >= 97 && str[count] <= 122)
				str[count] -= 32;
			next = 0;
		}
		else if (ft_str_is_anum(str[count]) == 1)
		{
			if (str[count] >= 65 && str[count] <= 90)
				str[count] += 32;
			next = 0;
		}
		else if (ft_str_is_anum(str[count]) == 0)
			next = 1;
		count++;
	}
	return (str);
}
/*int	main(void)
{
	char c[] = "42leZza42 cual42 aOUI42 OUI 42maZzis bonFSFS.a";
	ft_strcapitalize(c);
	printf("%s", c);
	return (0);
}*/
