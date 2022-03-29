/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:26:00 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/12 18:12:58 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	line(int largeur, char a, char b, char c)
{
	int	i;

	if	(largeur == 1)
	{
		ft_putchar(a);
	}
	else if	(largeur == 2)
	{
		ft_putchar(a);
		ft_putchar(c);
	}
	else if (largeur > 2)
	{
		ft_putchar(a);
		i = 2;
		while (i != largeur)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
	}
}

void    rush(int x, int y)
{
	int	i;

	if	(y == 1)
	{
		line(x, 'A', 'B', 'C');
	}
	else if	(y == 2)
	{
		line(x, 'A', 'B', 'C');
		line(x, 'A', 'B', 'C');
		ft_putchar('\n');
	}
	else if	(y > 2)
	{
		line(x, 'A', 'B', 'C');
		i = 2;
		while	(i < y)
		{
			line(x, 'B', ' ', 'B');
			i++;
			ft_putchar('\n');
		}
		line(x, 'A', 'B', 'C');
	}
	ft_putchar('\n');
}
