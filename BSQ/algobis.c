
#include "BSQ.h"

typedef struct s_reussite
{
    int i;
    int j;
} t_reussite;
int	ft_sqrt(int nb);
void    transform(t_reussite coord, int **array, int max_s);
void	print_array(int **array, t_map vanilla);
t_reussite ft_algo3(int size, int **array, int max_s);
int find_j(int size, int *array, int max_s, int j);
int ft_checkline_testj(int *array, int max_s,int j);
int ft_algo2(t_map vanilla, int **array, int max_s);
int ft_checkline(int *array, int max_s, int size);
int ft_algo1(t_map vanilla, int **array, int max_s);
int sum_line(int *array,int size);
int ft_maxsize(t_map vanilla);


int minimain(t_map vanilla, int **array)
{
    int max_s;
    t_reussite  coord;

    print_array(array,vanilla);

    coord.i = -1;
    coord.j = -1;
    max_s = ft_maxsize(vanilla);
    printf (" maxsize %d \n", max_s);
    while (ft_algo1(vanilla, array, max_s) != 1)
        max_s--;
    printf(" apres algo 1 %d\n", max_s);
    while (ft_algo2(vanilla, array, max_s) != 1)
        max_s--;
    printf(" apres algo 2 %d\n", max_s);
    coord = ft_algo3(vanilla.lines, array, max_s);
    while (coord.i <= 0)
    {
        printf(" apres algo 3 %d\n", max_s);
        max_s--;
        coord = ft_algo3(vanilla.lines, array, max_s);
    }
    transform(coord, array, max_s);
    print_array(array, vanilla);
    return (1);
}
void    transform(t_reussite coord, int **array, int max_s)
{
    int i;
    int j;

    i = coord.i;
    j = coord.j;
    while (i != coord.i + max_s)
    {
        while (j != coord.j + max_s)
        {
            array[i][j] = 3;
            j++;
        }
        j = coord.j;
        i++;
    }
}

t_reussite ft_algo3(int size, int **array, int max_s)
{
    int i;
    int j;
    int sum;
    t_reussite coord;

    sum = 0;
    i = 0;
    j = 0;
    coord.i = -1;
    coord.j = -1;
    while (i < size)
    {
        while (j < size)
        {
            //printf (" sum : %d , max_s : %d \n", sum, max_s);
            //find_j(size, array[i], max_s, j);
            while ((ft_checkline_testj(array[i + sum], max_s, j)) == 1)
            {
                sum++;
                if (i + sum == size)
                    break;
                //printf (" sum : %d , max_s : %d \n", sum, max_s);
                if (sum >= max_s)
                {
                    coord.i = i;
                    coord.j = j;           
                    return (coord);
                }
            }
            sum = 0;
            j++;
        }
        j = 0;
        i++;
    }
    return (coord);
}

int find_j(int size, int *array, int max_s, int j)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (i + j < size)
    {
        if (array[i + j] == 1)
        {
            count ++;
            if (count == max_s)
                return ((i+j) - count);
        }
        else 
        {
            count = 0;
            //i++;
        }
        i++;
    }
    return (0);
}
int ft_checkline_testj(int *array, int max_s,int j)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (i < max_s)
    {
        if (array[j + i] == 2)
        {
            return (0);
        }
        while (array[j + count] == 1)
        {
            count ++;
            if (count == max_s)
                return (1);
        }
        i++;
        count = 0;
    }
    return (0);
}

int ft_algo2(t_map vanilla, int **array, int max_s)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (i < vanilla.lines)
    {
        if ((ft_checkline(array[i], max_s, vanilla.lines)) == 1)
            sum++;
        i++;
    }
    if (sum >= max_s)
        return (1);
    return (0);
}

int ft_checkline(int *array, int max_s, int size)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (i < size)
    {
        if (array[i] == 1)
        {
            count ++;
            if (count == max_s)
                return (1);
        }
        else 
        {
            count = 0;
        }
        i++;
    }
    return (0);
}

int ft_algo1(t_map vanilla, int **array, int max_s)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (i < vanilla.lines)
    {
        if ((sum_line(array[i],vanilla.lines)) >= ((vanilla.lines - max_s - 1) * 2))
            sum++;
        i++;
    }
    if (sum > max_s)
        return (1);
    return (0);
}

int sum_line(int *array,int size)
{
    int i;
    int sum;

    i = 0;
    while (i < size)
    {
        sum += array[i];
        i++;
    }
    return (sum);
}

int ft_maxsize(t_map vanilla)
{
    int maxsize;

    maxsize = (vanilla.lines * vanilla.lines) - vanilla.nb_obs;
    while (ft_sqrt(maxsize) == 0)
        ft_sqrt(maxsize - 1);
    maxsize = ft_sqrt(maxsize);
    return (maxsize);
}

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (nb >= i * i)
	{
		if (nb > 2147395600)
    		return (0);
		if (nb == i * i)
			return (i);
		if (nb < i * i)
			return (0);
		i++;
	}
	return (0);
}