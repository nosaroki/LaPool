/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:13:07 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/31 21:22:45 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		write (1, &str[i], 1);
		i--;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	char str[] = "Roslan t'es le meilleur";
	printf("%s", ft_strrev(str));
	return (0);
}
