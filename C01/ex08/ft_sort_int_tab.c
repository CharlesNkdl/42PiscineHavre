/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:37:54 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/04 14:01:38 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bubblesort(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	ft_bubblesort(tab, size);
}

void	ft_bubblesort(int *tab, int size)
{
	int	count;
	int	ind;
	int	temp;

	count = 0;
	temp = 0;
	while (count != size)
	{
		ind = 0;
		while (ind != size - 1)
		{
			if (tab[ind] > tab[ind + 1])
			{
				temp = tab[ind + 1];
				tab[ind + 1] = tab[ind];
				tab[ind] = temp;
			}
			ind++;
		}
		count ++;
	}
}
/*
int main(void)
{
     int array[12] = {15, -12, , 41, 1, -3, 9, 0,11,15};
     int loop;

     for(loop = 0; loop < 12; loop++)
        printf("%d ", array[loop]);
         printf("\n");

     ft_sort_int_tab(array,12);

             for(loop = 0; loop < 12; loop++)
                   printf("%d ", array[loop]);



     return 0;
}*/
