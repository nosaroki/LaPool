/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:32:06 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/21 16:58:46 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	compt;

	compt = 0;
	while (str[compt] != '\0')
	{
		compt++;
	}
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (0);
}
