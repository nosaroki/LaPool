/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:37:04 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/27 12:45:57 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] && to_find[j] == str[i + j])
		{
			if (to_find[j] != '\0' && to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[] = "coucou toi ca va";
	char	to_find[] = "coucou";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
