/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <nosaroki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:15:09 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/28 22:14:39 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nb;

	nb = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = ft_fibonacci(5);
	printf("a = %d\n", a);
	return (0);
}*/
