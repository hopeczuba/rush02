/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 08:59:12 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/17 11:55:02 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"
#define UC 'A'
#define LC 'C'
#define S 'B'
#define M ' '

char	assign_02(int row, int col, int w, int h)
{
	if (!(col == 0 || col == w) && !(row == 0 || row == h))
		return (M);
	else if (row == 0)
		return (col == 0 || col == w) ? (UC) : (S);
	else if (row == h)
		return (col == 0 || col == w) ? (LC) : (S);
	else
		return (S);
}

int		rush_02(int w, int h, char *test)
{
	int		row;
	int		col;
	char	ch;

	row = 0;
	while (row <= h)
	{
		col = 0;
		while (col <= w)
		{
			ch = assign_02(row, col, w, h);
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
