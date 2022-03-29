/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:28:25 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/29 22:23:45 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	a;
	long long	b;

	a = nb;
	b = 1;
	if (nb <= 0)
		return (0);
	if (nb == 2)
		return (0);
	while ((b * b) < a)
		b++;
	if ((a % b) == 0)
		return (b);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("a = %d", ft_sqrt(25));
	return (0);
}*/
