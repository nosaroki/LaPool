/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:55:42 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/24 17:14:30 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*0void	ft_putnbr(int nbr)
{
	long int	a;

	a = nbr;
	if (a < 0)
	{
		a *= -1;
		ft_putchar('-');
	}
	if (a >= 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + '0');
}*/


void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 4;
	ft_swap(&a, &b);
//	ft_putnbr(a);
//	ft_putnbr(b);
	ft_putchar(a + '0');
	ft_putchar(' ');
	ft_putchar(b + '0');
	return (0);
}

/* NE PAS OUBLIER
si on a un nombre (et non un chiffre) il faut utiliser putnbr pour l'affichage
+ NE PAS OUBLIER D'APPELER LA FONCTION CONCERNEE DANS LE MAIN*/
