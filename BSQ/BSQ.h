#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_map {
	int	size;
	int	lines;
	char	vide;
	char	obs;
	char	plein;
	int	nb_obs;
} t_map;

typedef struct s_parse {
	unsigned long	file_read;
	int	file_open;
	char	*file_content;
	char	buff[4096];
	int	size;
} t_parse;

void	print_array(int **array,t_map vanilla);
struct s_map   separate_first(char *str, int size, t_map *vanilla);
struct s_parse get_file(char *src, t_parse parser);
int     ft_strlenbreak(char *str);
int    **populate_array(t_map *vanilla, char *str, int **array);
struct s_parse get_stdin(t_parse parser);
int minimain(t_map vanilla, int **array);

#endif