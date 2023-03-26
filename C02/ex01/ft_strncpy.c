/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:12:17 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/07 17:15:32 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
/*int   main(void)
{
        char    src[] = "";
        char    *dest = malloc(sizeof(src)+1);
        char    src1[] = "";
        char    *dest1 = malloc(sizeof(src1)+1);
	unsigned int n = 0;
	strncpy(dest1,src1,n);
        printf("%s\n",src1);
        printf("%s\n",dest1);
        ft_strncpy(dest,src,n);
        printf("%s\n",src);
        printf("%s\n",dest);
        free(dest);
        free(dest1);
}*/
