/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <nosaroki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:27:31 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/28 22:11:34 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	val;

	val = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (val > 0)
	{
		nb = nb * val;
		val--;
	}
	return (nb);
}
/*int	main(int argc, char **argv)
{
	int 	a;
	
	if (argc != 2)
		return (0);
	a = ft_iterative_factorial(argv[1][0] - '0');
	printf("a = %d\n", a);
	return 0;
}*/
