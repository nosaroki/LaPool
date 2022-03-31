/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:45:55 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/31 21:11:21 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i  = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc >= 2)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}


if (argc == 3)
	write (1, "\n", 1);
	return (0);
