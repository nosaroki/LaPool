/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 23:35:30 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/15 15:49:39 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//*#include <stdio.h>
//int main()
//{
//    int a, b;
//   ft_div_mod(25, 5, &a, &b);
//   printf("resutat de division = %d,resultat modulo %d \n", a, b);
//  
//    return (0);
//}
