/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:44:23 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/03 11:14:11 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
char	*ft_strcpy(char *dest, char *src)
{	
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	*src = "sfjsdifsjaga";
	char	*dest = malloc(strlen(src)+1);
	
	char	*src1 = "aosdasd";
	char	*dest1 = malloc(strlen(src1)+1);
	strcpy(dest1,src1);
	printf("%s\n",src1);
	printf("%s\n",dest1);

	ft_strcpy(dest,src);
	printf("%s\n",src);
        printf("%s\n",dest);
}*/
