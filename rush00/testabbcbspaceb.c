/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testabbcbspaceb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:07:23 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/12 16:07:30 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
  write(1, &c, 1);
}

void    line(int largeur, char a, char b, char c)
{
  int horizontal;
  
  horizontal = 0;

        if (largeur == 1)
        {
          ft_putchar(a);
        }
        else if (largeur == 2)
        {
          ft_putchar(a);
          ft_putchar(c);
        }
        else if (largeur > 2)
        {
          ft_putchar(a);
          horizontal = 2;
          while (horizontal != largeur)
          {
            ft_putchar(b);
            horizontal++;
          }
          ft_putchar(c);
        }
}

void  rush(int x, int y)
{
  int vertical;
  
      if (y == 1)
      {
        line(x, 'A', 'B', 'C');
      }
      else if (y == 2)
      {
        line(x, 'A', 'B', 'C');
        ft_putchar('\n');
        line(x, 'A', 'B', 'C');
      }
      else if (y > 2)
      {
        vertical = 2;
        line(x, 'A', 'B', 'C');
        ft_putchar('\n');
        while (vertical < y)
        {
          line(x, 'B', ' ', 'B');
          vertical++;
          ft_putchar('\n');
        }
        line(x, 'A', 'B', 'C');
      }
  ft_putchar('\n');
}
              
int main()
{
  rush(5, 3);
  return(0);
}
