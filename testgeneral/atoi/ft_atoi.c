/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:46:02 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/31 16:48:28 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	signe;

	i = 0;
	nb = 0;
	signe = 1;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if (str[i] == '-')
	{
		signe *= - 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ((str[i] >= '0') && (str[i] <= '9')))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * signe);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "    -2125kuihiy168";
	printf("%d", atoi(str));
	return (0);
}
