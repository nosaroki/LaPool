/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:37:04 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/26 19:57:56 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (to_find[j] != '\0' && to_find[j + 1] != '\0')
				return (&str[i + j]);
			j++;
		}
		i++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char	str[] = "he ken hi barbie";
	char	to_find[] = "";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}
