/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:57:40 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/15 16:02:57 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
//#include <stdio.h>
//int main()
//{
// int a, b;
// a = 10;
// b = 25;
// ft_swap(&a, &b);
//    return (0);
//}
