/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:35:30 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/14 15:45:32 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_test(int *p)
{
	printf("valeur associee a l'adresse de p : %d\n", *p);
	printf("adresse de p                     : %p\n", p);
}

int main()
{
	int *p;
	
	p = 2;
/** &p renvoie l'adresse du pointeur *p **/
	ft_test(&p);	
}


// Exemple de comment proceder pour faire un ft_swap et l'executer

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
	printf("La valeur de a est %d, b est %d", *a, *b);
}

int main()
{
	int *x;
	int *y;
	int a,b;
	a = 5;
	b = 2;
	x = &a;
	y = &b;
	ft_swap(x, y);
	return (0);
}


