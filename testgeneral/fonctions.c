/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:51:26 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/31 21:00:13 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_print_numbers(void)
{
	write (1, "0123456789", 10);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++
	return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src != '\0')
	{
		dest[i] = src[i];
		i++
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putnbr(int nb)
{
	long	a;

	a = nb;
	if (a < 0)
	{
		a *= - 1;
		ft_putchar('-');
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	signe;

	i = 0;
	nb = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		signe *= - 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * signe);
}

// first word

void	ft_first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i] != '\0' && (str[i] != ' ') || (str[i] != '\t'))
	{
		write (1, &str[i], 1);
		i++
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_first_word(argv[1]);
	return (0);
}

// first param

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(argv[1]);
	return (0);
}

// last param

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (argv > 1)
	{
		ft_putstr(argv[i]);
		i--;
	}
	write (1, "\n", 1);
}

