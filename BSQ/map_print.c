#include "BSQ.h"

void	print_array(int **array, t_map vanilla)
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