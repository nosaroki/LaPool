/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <nosaroki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:57:54 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/22 01:06:10 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 97 && str[i] <= 122)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

// int 	main(void)
// {
// 	printf("%d", ft_str_is_lowercase("ohdismoioui"));
// 	return (0);
// }
