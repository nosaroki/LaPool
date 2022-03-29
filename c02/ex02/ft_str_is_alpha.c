/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <nosaroki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:14:32 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/23 18:14:39 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
// #include <stdio.h>
//
//int	main(void)
//{
// 	printf("%d", ft_str_is_alpha("helloqt"));
// 	return (0);
// }
