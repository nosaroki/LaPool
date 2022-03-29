/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:47:49 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/23 00:15:35 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 1;
	lowercase(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i -1] < 47) || ((str[i -1] >= 58) && (str[i - 1] <= 64)) || ((str[i - 1] >= 91) && (str[i - 1] <= 96)) 
		if (str[i - 1] > 123)) && ((str[i - 1] >= 97) && (str[i - 1] <= 122))
		{
			str[i] = str[i] - 32;
		}
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
