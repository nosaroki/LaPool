/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bimbam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:05:22 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/31 15:19:16 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int nb)
{
	if (nb > 9)
		print(nb / 10);
	write (1, &"0123456789"[nb % 10], 1);
}

void	fizzbuzz(void)
{
	int	nb;

	nb= 0;
	while (nb <= 100)
	{
		if (((nb % 3) == 0) && ((nb % 5) == 0))
			write (1, "fizzbuzz", 8);
		else if ((nb % 3) == 0)
			write (1, "fizz", 4);
		else if ((nb % 5) == 0)
			write (1, "buzz", 4);
		else
			print(nb);
		write (1, "\n", 1);
		nb++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
