/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sud4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:03:41 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/20 17:53:38 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//void	ft_row(int *row, int i)
//{
//	int	i;
//	i = 4;
//	row[4];
//	if (l1 == 4)
//
//	{
//		while(i <= 4)
//			i++;
//	}
//
//}


void	ft_row_col(int **tab, int col1, int col2, int row1, int row2)
{

// Afficher les possiblites pour un tableau 2x2 en se basant sur les parametres
	tab = (int**);

 	if (col1 == 1)
        {
		tab[0][0] = {2};
		tab[1][0] = {1};
        }
	if (col1 == 2)
	{
		tab[0][0] = {1};
		tab[1][0] = {2};

	}
	if (col2 == 1)
        {
                tab[0][1] = {2};
                tab[1][1] = {1};
        }
        if (col2 == 2)
        {
                tab[0][1] = {1};
                tab[1][1] = {2};

        }
	if (row1 == 1)
        {
		tab[0][0] = {2};
		tab[0][1] = {1};
        }
        if (row1 == 2)
        {
                tab[0][0] = {1};
                tab[0][1] = {2};
        }
        if (row2 == 1)
        {
                tab[1][0] = {2};
                tab[1][1] = {1};
        }
        if (row2 == 2)
        {
                tab[1][0] = {1};
                tab[1][1] = {2};
        }
}

int	main(void)
{
	

}
