/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:43:10 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/07 16:57:09 by cnikdel          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	count;

	len = ft_strlen(dest);
	count = 0;
	while (count < nb && src[count] != '\0')
	{
		dest[len] = src[count];
		count ++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	*src1 = "789" ;
	char	dest1[50] = "";
	char	*src = "789" ;
	char	dest[50] = "";
	unsigned int n = 2;

	strncat(dest1,src1,n);

	printf("vrai source :%s\n",src1);
	printf("vrai dest :%s\n",dest1);

	ft_strncat(dest,src,n);
	printf("mienne source :%s\n",src);
        printf("mienne dest :%s\n",dest);
}*/
