/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekartals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:13:20 by ekartals          #+#    #+#             */
/*   Updated: 2022/03/23 16:31:42 by ekartals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_vide(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

void	ft_backtrack(char *tab, int x, int *max)
{
	int	i;
	int	j;

	if (x == 10)
	{
	x = 0;
		while (x < 10)
			ft_putchar(tab[x++] + '0');
		ft_putchar('\n');
		(*max)++;
		return ;
	}
i = -1;
	while (++i < 10)
	{
	j = 0;
		while (j < x && i != tab[j] && ft_vide(tab[j] - i) != x - j)
		j++;
		if (j >= x)
		{
		tab[x] = i;
			ft_backtrack(tab, x + 1, max);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10];
	int		max;

max = 0;
	ft_backtrack(tab, 0, &max);
	return (max);
}

int main (void)
{
printf("\n%d solutions\n", ft_ten_queens_puzzle());
}
