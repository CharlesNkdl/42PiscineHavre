#include "BSQ.h"

typedef struct i_value {
    int lar;
    int hei;
    int i;
    int j;
    int big;
} t_value;

int    **incr_around(int **array, int i, int j);
void    reverse_sweep(int **array, t_value *value);
void    transform(t_value *value, int **array);

void give_value(t_map vanilla,int **array)
{
    t_value value;

    value.lar = vanilla.lines;
    value.hei = vanilla.lines;
    value.i = 0;
    value.j = 0;
    reverse_sweep(array, &value);
    transform(&value,array);
    print_array(array, vanilla);
}

int    **incr_around(int **array, int i, int j)
{
    int min;

    min = array[i][j - 1];

    if (array[i - 1][j] < min)
        min = array[i - 1][j];
    if (array[i - 1][j - 1] < min)
        min = array[i - 1][j - 1];
    if (min != 0)
        array[i][j] = min + 1;
    return (array);
}

void    reverse_sweep(int **array, t_value *value)
{
    int     i;
    int     j;

    printf("%d \n %d \n", value->lar, value->hei);

    i = 1;
    j = 1;
    value->big = 1;
    value->i = 0;
    value->j = 0;
    while (++i <= value->hei)
    {
        while (j <= value->lar)
        {
            if (array[i][j] >= 1)
            {
                incr_around(array, i, j);
                if (array[i][j] > value->big)
                {
                    value->i = i;
                    value->j = j;
                    value->big = array[i][j];
                }
            }
            j++;
        }
        j = 1;
    }
}

void    transform(t_value *value, int **array)
{
    int i;
    int j;

    i = 0;
    j = 0;
    printf("%d \n %d \n", i, j);
    printf("%d \n %d \n%d \n %d \n %d \n", value->i, value->j,value->lar,value->hei,value->big);
    while (i <= value->big)
    {
        while (j <= value->big)
        {
            array[value->i - i][value->j - j] = value->big;
            j++;
        }
        j = 0;
        i++;
    }
}
