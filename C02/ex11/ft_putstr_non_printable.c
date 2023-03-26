/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:02:42 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/07 17:22:34 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

int	ft_str_is_printable(char str)
{
	int	check;

	check = 1;
	if ((str >= 32 && str <= 126) && (check == 1))
		check = 1;
	else
		check = 0;
	return (check);
}

void	convert(char str)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[str / 16], 1);
	write(1, &hex[str % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	ind;
	int	check;

	ind = 0;
	check = 0;
	while (str[ind])
	{
		check = ft_str_is_printable(str[ind]);
		if (check == 0)
			convert(str[ind]);
		else
			write(1, str, 1);
		ind += 1;
	}
}
int main(void)
{
        //char    str[] = "Coucou\ntu v\tas b\rien ?";
	char c = 16;
        ft_putstr_non_printable(&c);

}
