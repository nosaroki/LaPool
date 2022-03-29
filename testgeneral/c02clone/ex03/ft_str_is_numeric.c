/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:47:47 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/21 18:21:23 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
//
//#include <stdio.h>
//
//int	main(void)
//{
//	printf("%d", ft_str_is_numeric("3455"));
//	return (0);
//}
