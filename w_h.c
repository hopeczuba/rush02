/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_h.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 11:22:14 by hczuba            #+#    #+#             */
/*   Updated: 2016/08/03 11:22:18 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int		calculate_width(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (i == ft_strlen(str))
		return (-1);
	else
		return (i);
}

int		calculate_height(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[j])
	{
		if (str[j] == '\n')
			i++;
		j++;
	}
	return (i == 0 ? -1 : i);
}
