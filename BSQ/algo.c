
#include "BSQ.h"

int check_sum_all(t_map vanilla, int **array, int maxsize);
int	ft_sqrt(int nb);
int check_line_simple(t_map vanilla,int *array, int maxsize);
int check_line(t_map vanilla, int **array, int maxsize, int i);
int ft_maxsize(t_map vanilla);
int rec_algo(t_map vanilla, int **array, int maxsize);

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

int check_sum_all(t_map vanilla, int **array, int maxsize)
{
    int count;
    int obs;
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < vanilla.lines)
    {
        while (j < vanilla.lines)
        {
            if (array[i][j] == 1)
            {
                obs++;
            }    
            j++;    
        }
        if (obs <= maxsize)
            count++;
        obs = 0;
        j = 0;
        i++;
    }
    if (count < maxsize)
        return (0);
    else
        return (1);
}

/*int check_line_simple(t_map vanilla,int *array, int maxsize)
{
    int j;
    int count;

    j = 0;
    count = 0;
    while (j < vanilla.lines || j + maxsize < vanilla.lines)
    {
        if (array[j] == 0)
        {
            count++;
            if (count == maxsize)
                return(1);
        }
        else if (array[j] == 1)
        {
            count = 0;
            j++;
        }
        j++;
    }
    return (0);
}*/

int check_line(t_map vanilla, int **array, int maxsize, int i)
{
    int j;
    int count;

    j = 0;
    count = 0;
    while (j < vanilla.lines && j < vanilla.lines - maxsize/*&& (j + maxsize) < vanilla.lines*/)
    {
        printf("i = %d, j = %d\n", i, j);
        if (array[i][j] == 0 /*&& array[i + maxsize][j] == 0*/)
        {
            count++;
            if (count == maxsize)
            {
                //*p = j;
                return (1);
            }
        }
        else if (array[i][j] == 1 /*|| array[i + maxsize][j] == 1*/)
        {
            count = 0;
            j++;
        }
        j++;
    }
    return (0);
}
int minimain(t_map vanilla, int **array)
{
    int maxsiz;

    maxsiz = ft_maxsize(vanilla);
    printf(" %d \n", maxsiz);
    rec_algo(vanilla, array, maxsiz);
    print_array(array,vanilla);
    return (0);
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

int checksquare(int **array, int i, int maxsize, int j)
{
    int q;
    int l;
    int stat;

    q = 0;
    l = 0;
    while (q < maxsize)
    {
        while (l < maxsize)
        {
            if (array[i+q][j+l] == 1)
                return (0);
            l++;
        }
        if (q + 1!= maxsize)
            l = 0;
        q ++;
    }
    stat = l;
    while (q > 0)
    {
        while (l >= 0)
        {
            if (array[i - q][j - l] == 0)
                array[i - q][j - l] = 2;
            l--;
        }
        l = stat;
        q --;
    }
    return (1);
}

int rec_algo(t_map vanilla, int **array, int maxsize)
{
    int i;
    int j;
    //int *ptr;

    j = 0;
    //ptr = &j;
    i = 0;
    printf(" MAXSIZE %d \n", maxsize );
    if (maxsize == 0)
        return (0);
    /*if (check_sum_all(vanilla, array, maxsize) != 1)
        rec_algo(vanilla, array, maxsize - 1);*/
    while ((i < vanilla.lines) && (i < vanilla.lines - maxsize/* && ((i + maxsize) < vanilla.lines + 1)*/))
    {
        while (check_line(vanilla, array, maxsize, i) == 1)
        {
            printf("bg va");
            if (checksquare(array, i, maxsize, j) == 1)
            {
                printf(" CBON GROS \n");
                print_array(array,vanilla);
                exit(0);
            }
        }
        //j = *ptr;
        /*if (check_line_simple(vanilla,array[i + maxsize], maxsize) == 1)
            i++;
        else
            i += maxsize + 1;*/
        i++;
    }
    rec_algo(vanilla,array,(maxsize - 1));
    return (0);
}