/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:04:33 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/29 12:09:19 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

char	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc >= 1)
	{
		ft_putstr(argv[0]);
	}
	write (1, "\n", 1);
	return (0);
}
