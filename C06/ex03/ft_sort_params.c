/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:07:14 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/15 11:45:53 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

void	ft_bubblesort(char **tab, int size)
{
	int		swap;
	int		ind;
	char	*temp;

	swap = 1;
	ind = 0;
	while (swap)
	{
		swap = 0;
		ind = 0;
		while (++ind < size - 1)
		{
			if (ft_strcmp(tab[ind], tab[ind + 1]) > 0)
			{
				temp = tab[ind];
				tab[ind] = tab[ind + 1];
				tab[ind + 1] = temp;
				swap = 1;
			}
		}
	}
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count_result;
	int	count_index;
	int	shortest;

	count_index = 0;
	count_result = 0;
	if (ft_strlen(s1) > ft_strlen(s2))
		shortest = ft_strlen(s2);
	else
		shortest = ft_strlen(s1);
	while (count_index <= shortest)
	{
		if ((s1[count_index] != s2[count_index]) && (count_result == 0))
			count_result += s1[count_index] - s2[count_index];
		count_index++;
	}
	return (count_result);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc <= 1)
		return (0);
	i = 0;
	ft_bubblesort(argv, argc);
	while (i != (argc - 1))
	{
		ft_putstr(argv[++i]);
		write(1, "\n", 1);
	}
	return (0);
}
