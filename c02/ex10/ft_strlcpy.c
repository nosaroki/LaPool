/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <nosaroki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:32:06 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/22 01:46:01 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	compt;

	compt = 0;
	while (src[compt] != '\0')
	{
		compt++;
	}
	i = 0;
	while (src[i] != '\0' && i < compt - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (compt);
}
