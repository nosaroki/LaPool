/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <nosaroki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:28:59 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/23 18:12:53 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
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
