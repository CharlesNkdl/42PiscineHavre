#include "BSQ.h"

int	**populate_array(t_map *vanilla, char *str, int **array)
{
	int	i;
	int	j;
	int	w;
	int x;

	i = ft_strlenbreak(str) + 1;
	j = 0;
	w = 0;
	x = -1;
	//printf (" %c \n", str[i]);
	vanilla->nb_obs = 0;
    array = (int **)malloc((vanilla->lines * sizeof(int *)) + 1);
	while (++x <= vanilla->lines)
		array[x] = (int *)malloc((vanilla->lines * sizeof(int)) + 1);
	while (str[i])
	{
		if (str[i] == '\n')
		{
			//printf (" %c \n", str[i]);
			j++;
			w = 0;
			i++;
		}
		if (str[i] == vanilla->vide)
		{
			//printf (" %c \n", str[i]);
			array[j][w] = 1;
		}
		if (str[i] == vanilla->obs)
		{
			//printf (" %c \n", str[i]);
			array[j][w] = 0;
			vanilla->nb_obs += 1;
		}
		w++;
		i++;
	}
    return (array);
	//print_array(array,&vanilla);
}