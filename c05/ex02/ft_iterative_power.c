/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:08:37 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/29 11:14:02 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * temp;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;

	(void) argc;
	(void) argv;
	a = ft_iterative_power(2, 4);
	printf("a = %d\n", a);
	return (0);
}*/
