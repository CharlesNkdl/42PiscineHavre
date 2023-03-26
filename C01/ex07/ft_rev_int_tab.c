/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:23:38 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/03 13:36:27 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	temp;

	temp = 0;
	left = 0;
	size --;
	while (left < size)
	{
		temp = tab[left];
		tab[left] = tab[size];
		tab[size] = temp;
		left ++;
		size --;
	}
}
/*int main()
 {
     int array[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0,11};
     int loop;
 
     for(loop = 0; loop < 11; loop++)
        printf("%d ", array[loop]);
         printf("/n");
 
     ft_rev_int_tab(array,11);
 
             for(loop = 0; loop < 11; loop++)
                   printf("%d ", array[loop]);
 
 
 
     return 0;
 }*/
