/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:00:12 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/28 22:38:46 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;

	(void) argc;
	(void) argv;
	a = ft_recursive_power(1, 1);
	printf("a = %d\n", a);
	return (0);
}*/
