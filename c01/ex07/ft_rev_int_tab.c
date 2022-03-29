
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:17:55 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/17 15:55:30 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	s(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = size -1;
	swap = 0;
	while (i <= j)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}

void	ft_rev_in_tab(int *tab, int size)
{
	int	  i, j;

	i = 0;
	j = size -1;
	while (i <= j)
	{
		ft_swap(tab[i], tab[j]);
		i++;
		j--;
	}
}
//int main(void) 
//{
//  int size = 6;
//  int tab[] = {2, 4, 8, 5, 9, 6};
//  int i = 0;
//  ft_rev_in_tab(tab, size);
//  
//  while (i < size)
//  {
//    printf("%d", tab[i]);
//   i++;
//  }
// return 0;
//}
