/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:13:25 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/31 18:21:54 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	first(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ((str[i] == ' ') || str[i] == '\t'))
		i++;
	while (str[i] && (str[i] != ' ') && str[i] != '\t')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		first(argv[1]);
	}
	return (0);
}
