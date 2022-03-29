/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:17:37 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/21 17:57:44 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//
//#include <stdio.h>
//
//int	main()
//{
//	char	dest[12];
//	char	*src;
//	src = "Hello World";
//	ft_strcpy(dest, src);
//	printf("%s", dest);
//	return (0);
//}
