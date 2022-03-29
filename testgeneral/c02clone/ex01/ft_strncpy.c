/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:28:59 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/21 17:59:21 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] < n;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//
//int	main(void)
//{
//	char	dest[] = "Hello There";
//	char	src[] = "General Kenobi";
//
//	ft_strncpy(dest, src, 8);
//	printf("%s", dest);
//	return (0);
//} 
