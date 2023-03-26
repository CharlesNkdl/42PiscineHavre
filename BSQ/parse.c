/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:04:05 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/21 21:15:57 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>


typedef struct s_map {
	int	size;
	int	lines;
	char	vide;
	char	obs;
	char	plein;
	int	nb_obs;
} t_map;

void	print_array(int **array,t_map vanilla);
t_map   separate_first(char *str, int size);
int     ft_strlenbreak(char *str);
void    populate_array(t_map vanilla, int **array, char *str);

int	main(int argc, char ** argv) // Fonction get_file
{
	unsigned long	file_read;
	int	file_open;
	char	*file_content;
	char	buff[4096];
	int	size;
	
	size = 0;
	if (argc < 2)
		return (0);
	file_open = open(argv[1],O_RDONLY);
	if (file_open == -1)
		return (0);
	file_read = read(file_open, buff,sizeof(buff));
	if (file_read >= sizeof(buff))
	{
		while (file_read)
		{
			file_read = read(file_open, buff,sizeof(buff));
			size += file_read;
		}
	}
	if (size == 0)
		size = file_read;
	printf("size : %d", size);
	file_content = malloc(size + 1);
	close(file_open);
	file_open = open(argv[1],O_RDONLY);
	file_read = read(file_open, file_content, size);
	//printf(" %s ", file_content);
	close(file_open);
	separate_first(file_content, size);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_map	separate_first(char *str, int size) //parse
{
	int	i;
	int	len;
	int	**array;
	t_map	vanilla;

	i = 0;
	len = ft_strlenbreak(str);
	vanilla.plein = str[len - 1];
	vanilla.obs = str[len - 2];
	vanilla.vide = str[len - 3];
	vanilla.size = size;
	while (i < (len - 3))
	{
		vanilla.lines = vanilla.lines * 10 + (str[i] - '0');
		i++;
	}
	printf(" %d",vanilla.lines);
	printf(" %c",vanilla.obs);
	printf(" %c",vanilla.vide);
	printf(" %c \n",vanilla.plein);
	i = -1;
	array = (int **)malloc((vanilla.lines * sizeof(int *)) + 1);
	while (++i <= vanilla.lines)
		array[i] = (int *)malloc((vanilla.lines * sizeof(int)) + 1);
	//int array[11][11];
	populate_array(vanilla, array, str);
	return (vanilla);
}

int	ft_strlenbreak(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

void	populate_array(t_map vanilla, int **array, char *str) //grid
{
	int	i;
	int	j;
	int	w;

	i = ft_strlenbreak(str) + 1;
	j = 0;
	w = 0;
	printf (" %c \n", str[i]);
	vanilla.nb_obs = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			//printf (" %c \n", str[i]);
			j++;
			w = 0;
			i++;
		}
		else if (str[i] == vanilla.vide)
		{
			//printf (" %c \n", str[i]);
			array[j][w] = 0;
		}
		else if (str[i] == vanilla.obs)
		{
			//printf (" %c \n", str[i]);
			array[j][w] = 1;
			vanilla.nb_obs += 1;
		}
		w++;
		i++;
	}
	print_array(array,vanilla);
}

void	print_array(int **array,t_map vanilla) //print
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i != vanilla.lines)
	{
		while (j != vanilla.lines)
		{
			printf(" %d",array[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}