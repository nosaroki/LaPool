/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revisions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:27:56 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/26 16:02:36 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i +j])
		{
			if (to_find[j] != '\0' && str[i + j] != '\0')
				return (str);
			i++;
		}
		j++;
	}
	return (str[i])
}
