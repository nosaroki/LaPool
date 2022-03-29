/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:51:51 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/24 12:53:21 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*rev_print(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i--;
	}
	return (str);
}

int	main(void)
{

	char	str[] = "merci giovanni le s";
	rev_print(str);
	return (0);
}
