/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:51:33 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/07 20:10:37 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	while (dest[i] != '\0')
		++i;
	r = 0;
	while (src[r] != '\0')
		++r;
	if (size <= i)
		r = r + size;
	else
		r = r + i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (r);
}
/*int	main(void)
{
	char src[5] = "1";
	char dest[50] = "1ll";
	unsigned int result = 0;
	unsigned int size = 20;

	char src1[5] = "1";
	char dest1[50] = "1ll";
	unsigned int result1 = 0;
	//unsigned int size1 = 5;
	result1 = strlcat(dest1 , src1 , size);
	printf("taille : %d \n", result1);
	printf(" src : %s \n", src1);
	printf(" dest : %s \n", dest1);
	
	result = ft_strlcat(dest , src , size);
	printf("taille : %d \n", result);
	printf(" src : %s \n", src);
	printf(" dest : %s \n", dest);
}*/
