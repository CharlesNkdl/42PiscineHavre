/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:06:17 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/21 11:09:54 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sl(char *str)
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

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	count;

	len = ft_sl(dest);
	count = 0;
	while (src[count] != '\0')
	{
		dest[len] = src[count];
		count ++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

int	a_s(int size, char **strs)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i != size)
	{
		count += ft_sl(strs[i]);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		i;

	i = 0;
	strjoin = NULL;
	if (size <= 0)
	{
		strjoin = malloc(1);
		return (strjoin);
	}
	strjoin = (char *)malloc(a_s(size, strs) + ((size - 1) * ft_sl(sep)) + 1);
	if (!strjoin)
		return (strjoin);
	while (i < size)
	{
		ft_strcat(strjoin, strs[i]);
		if ((i + 1) != size)
			ft_strcat(strjoin, sep);
		i++;
	}
	return (strjoin);
}
/*
int	main(int argc, char **argv)
{
	//char *strs[][20] = {"prout","caca","pipi","fesses"};
	//char sep[] = "immature";
	//int size = 4;
	//argc++;

	printf("%s",ft_strjoin(argc,argv,"21"));
}*/
