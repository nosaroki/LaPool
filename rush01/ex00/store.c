/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <nosaroki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:14:21 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/23 12:04:25 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	store(char **tab)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 1;
	c[4] = {48, 48, 48, 48};
	while (i < 4)
	{
		if (tab[1][i] > c[j - 1])
			c[j - 1] = tab[1][i];
		j++;
		i++;
	}

}

int main(int argc, char *argv[])
{
	store(argv);
	printf("%ls", c);
	return(0);
}
