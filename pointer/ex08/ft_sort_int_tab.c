/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <nosaroki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 23:58:36 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/16 01:18:12 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
    
}

void    ft_sort_int_tab(int *tab, int size)
{
    int pivot;
    int i;
    int j;
    i = 0;
    j = -1;

    if (size < 2)
        return ;
    pivot = tab[--size];
    while (++j < size) // j il va commencer a 0;
    {
        if(tab[j] < pivot)
            ft_swap(&tab[i++], &tab[j]);
        if (tab[i] > tab[size])
            ft_swap(&tab[i], &tab[size]); 
        ft_sort_int_tab(tab, i);
        ft_sort_int_tab(tab + i +1, size + 1); // tu fais tab + i + 1 pour accueillir 
        une valeur plus grande a tab et pour la size tu fais plus 1 pour augmenter la taille
    }
}
