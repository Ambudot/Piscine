/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 15:36:21 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/10 15:48:48 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>

void    ft_putchar (char c)
{
	write (1, &c, 1);
}

void    rush (int x, int y)
{
	int ligne;
	int colonne;

	ligne = 0;
	colonne = 0;

	while (ligne < y)
	{
		while (colonne < x)
		{
			if ((colonne == 0 && (ligne == 0 || ligne == (y - 1))) ||
				(colonne == (x - 1) && (ligne == 0 || ligne == (y - 1))))
			{
				ft_putchar ('o');
			}
			else if (colonne == 0 || colonne == (x - 1))
			{
				ft_putchar ('|');
			}
			else if (ligne == 0 || ligne == (y - 1))
			{
				ft_putchar ('-');
			}
			else
			{
				ft_putchar (' ');
			}
			colonne++;
		}
		ligne++;
		ft_putchar('\n');
	}
}

int main (int argc, char **argv)
{
	rush(argv[1][0] % 48, argv[2][0] % 48);
	return 0;
}

