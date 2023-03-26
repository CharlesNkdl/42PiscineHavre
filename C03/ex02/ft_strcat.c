/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:27:37 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/07 16:41:49 by cnikdel          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	count;

	len = ft_strlen(dest);
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
/*int	main(void)
{
	char	*src = "1" ;
	char	dest[50] = "";
	char	*src1 = "1" ;
	char	dest1[50] = "";

	strcat(dest,src);

	printf("source vrai:%s\n",src);
	printf("dest vrai :%s\n",dest);

	ft_strcat(dest1,src1);
	printf("source mienne :%s\n",src1);
        printf("dest mienne :%s\n",dest1);
}*/
