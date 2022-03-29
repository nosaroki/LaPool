/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:01:32 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/29 19:45:28 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (a <= nb / a)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	a;

	a = nb;
	while (ft_is_prime(a) == 0)
		a++;
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("a = %d", ft_find_next_prime(86432));
	return (0);
}*/
