/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:46:39 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/20 11:54:07 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft(int **tab)
{
	int	i;
	int	j;
	int	d;

	i = 0;
	tab = (int**) malloc(sizeof(int) * 20);
	while (i < 4)
	{
		d = 1;
		j = 0;
		while (j < 4)
		{
			tab[i][j] = d;
			d = d + 1;
			j++;
		}
		i++;
	}
}

int main()
{
	int	tab[4][4] = 
	{
	       	{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 2, 1},
		{4, 3, 2, 1}
	};
	for (int i; i < 4; i++ && int j; i < 4; j++)
		printf("%ls", tab[i][j]);
}
