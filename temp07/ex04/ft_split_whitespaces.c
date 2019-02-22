/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:51:38 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/22 16:32:46 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_next_position(char *str, int i)
{
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
				i++;
			while (!(str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			{
				return (i);
			}
}

int		ft_len_words(char *str, int i)
{
	int x;

	x = 0;
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
				i++;
			while (!(str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			{
				x++;
				i++;
			}
			return (x);
	}
}

int		ft_count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
			i++;
		while (!(str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			i++;
		words++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		words;
	char	*len_words;
	char	**arr_words;

	i = 0;
	words = ft_count_words(str);
}
