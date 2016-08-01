/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:09:40 by hczuba            #+#    #+#             */
/*   Updated: 2016/08/01 13:09:42 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"
#include <stdlib.h>

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char		*test_string(int w, int h, int rush, char *test)
{
	if (w == 0 || h == 0)
		return (0);
	w--;
	h--;
	if (rush == 0)
		rush_00(w, h, test);
	if (rush == 1)
		rush_01(w, h, test);
	if (rush == 2)
		rush_02(w, h, test);
	if (rush == 3)
		rush_03(w, h, test);
	if (rush == 4)
		rush_04(w, h, test);
	return (test);
}

void		print_res(int rush, int w, int h)
{
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(w);
	ft_putstr("] [");
	ft_putnbr(h);
	ft_putstr("]");
}

void		test_rush(int w, int h, char *input)
{
	int		i;
	char	*test;
	int		hits;

	hits = 0;
	i = 0;
	test = (char *)malloc(sizeof(test) * ((w * h) + h + 1));
	while (i <= 4)
	{
		test_string(w, h, i, test);
		if (ft_strcmp(test, input) == 0)
		{
			if (hits > 0)
			{
				ft_putstr(" || ");
			}
			print_res(i, w, h);
			hits++;
		}
		i++;
	}
	free(test);
	ft_putchar('\n');
}
