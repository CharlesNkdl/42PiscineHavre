/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:31:19 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/09 21:00:30 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = -1;
	dup = (char *) malloc(ft_strlen(src) + 1);
	if (dup == NULL)
		return (NULL);
	while (src[++i])
		dup[i] = src[i];
	dup[i] = src[i];
	return (dup);
}
/*
int	main(void)
{
	char src[]="oui o";

	printf("%s",ft_strdup(src));
}*/
