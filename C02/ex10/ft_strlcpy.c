/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:50:59 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/06 13:00:36 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	len;

	len = ft_strlen(src);
	count = 1;
	if (size >= 1)
	{		
		while ((count < size) && (*src != '\0'))
		{
			*dest = *src;
			src += 1;
			dest += 1;
			count++;
		}
		*dest = '\0';
	}
	return (len);
}
/*int   main(void)
{
        char    src[] = "Hello there, Venus";
        char    dest[] = "huilo thire, vikan";
	unsigned int n = 98;
	unsigned int count = 0;
        printf("%s\n",src);
        printf("%s\n",dest);
        count = ft_strlcpy(dest,src,n);
        printf("%s;\n",src);
        printf("%s;\n",dest);
	printf("%u", count);
}*/
