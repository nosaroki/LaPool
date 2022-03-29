/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entree.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:24:37 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/20 22:03:01 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	entree(void)
{
	int	i;
	int	j;
	int	table;

	table[4][4] = {{1, 2, 3, 4},
	{5, 6, 7, 8},
	{9, 2, 2, 4},
	{0, 6, 1, 4}};
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(table[i][j] + '0');
			write (1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}

int	main(void)
{
	entree();
	return (0);
}
