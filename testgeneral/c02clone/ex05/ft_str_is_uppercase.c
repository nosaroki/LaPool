/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:50:21 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/21 19:38:07 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 65 && str[i] <= 90)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
//#include <stdio.h>
//
//int     main(void)
//{
//        printf("%d", ft_str_is_uppercase("gne"));
//        return (0);
//}
