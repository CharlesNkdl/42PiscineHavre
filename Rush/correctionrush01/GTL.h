/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GTL.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikdel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:25:21 by cnikdel           #+#    #+#             */
/*   Updated: 2023/03/12 23:25:56 by cnikdel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GTL_H
# define GTL_H
# define S 6
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

void	ft_logiccol(int array[S][S]);
void	ft_writelogcol(int array[S][S], int i);
void	ft_logicrow(int array[S][S]);
void	ft_writelogrow(int array[S][S], int j);
void	copy(int arr[S][S], int tampon[S][S]);
void	zero_is_four(int tampon[S][S]);
void	crosscheck_four(int tampon[S][S], int arr[S][S]);
void	ft_check_row(int tampon[S][S], int i, int j);
void	ft_check_columns(int tampon[S][S], int i, int j);
void	copy_four(int arr[S][S], int tampon[S][S]);
void	check_prime(int arr[S][S], int tampon[S][S]);
void	ft_check_rowprime(int tampon[S][S], int i, int j);
void	ft_check_columnsprime(int tampon[S][S], int i, int j);
int		ft_decrem_prime(int tampon, int repere);
int		ft_check_modulo(int tampon[S][S], int arr[S][S], int i, int j);
int		check_final_l(int arr[S][S]);
int		check_final_c(int arr[S][S]);
void	hypotest1(int tamp[S][S]);
void	hypotest2(int tamp[S][S]);
void	hypotest3(int tamp[S][S]);
void	hypotest4(int tamp[S][S]);
int		premier(int array[S][S]);
void	ft_runtest1(int array[S][S], int tampon[S][S], int tampon2[S][S]);
void	ft_runtest2(int array[S][S], int tampon[S][S], int tampon2[S][S]);
void	ft_runtest3(int array[S][S], int tampon[S][S], int tampon2[S][S]);
void	ft_runtest4(int array[S][S], int tampon[S][S], int tampon2[S][S]);
void	ft_runtest5(int array[S][S], int tampon[S][S], int tampon2[S][S]);
void	ft_runtest6(int array[S][S], int tampon[S][S], int tampon2[S][S]);
int		ft_finished(int array[S][S]);
void	get_col_clues(char *str, int array[S][S]);
void	get_row_clues(char *str, int array[S][S]);

#endif
