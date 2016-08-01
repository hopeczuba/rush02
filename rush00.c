/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 11:33:02 by hczuba            #+#    #+#             */
/*   Updated: 2016/08/01 13:10:03 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"
#define C 'o'
#define T '-'
#define S '|'
#define M ' '

char	assign_00(int row, int col, int w, int h)
{
	if (!(col == 0 || col == w) && !(row == 0 || row == h))
		return (M);
	else if ((col == 0 || col == w) && (row == 0 || row == h))
		return (C);
	else if ((col == 0 || col == w) && !(row == 0 || row == h))
		return (S);
	else
		return (T);
}

int		rush_00(int w, int h, char *test)
{
	int		col;
	int		row;
	char	ch;

	row = 0;
	while (row <= h)
	{
		col = 0;
		while (col <= w)
		{
			ch = assign_00(row, col, w, h);
			*test = ch;
			test++;
			col++;
		}
		*test = '\n';
		test++;
		row++;
	}
	*test = '\0';
	return (0);
}
