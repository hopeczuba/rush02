/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:07:45 by hczuba            #+#    #+#             */
/*   Updated: 2016/08/01 13:07:47 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"
#define BUFF_SIZE 4096

char	*concat(char *dest, char *source)
{
	while (*dest != '\0')
		++dest;
	while ((*dest = *source) != '\0')
	{
		++dest;
		++source;
	}
	return (dest);
}

char	*ft_concat(char *s1, char *s2)
{
	char	*tmp;
	int		size;

	size = sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1;
	tmp = (char *)malloc(size);
	*tmp = '\0';
	concat(tmp, s1);
	concat(tmp, s2);
	free(s1);
	return (tmp);
}

void	take_input(int fd)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	char	*str;

	str = malloc(sizeof(char) * 1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		str = ft_concat(str, buf);
	}
	if (calculate_width(str) < 0 || calculate_height(str) < 0)
		ft_putstr("aucune\n");
	else
		test_rush(calculate_width(str), calculate_height(str), str);
	free(str);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;

	i = 1;
	fd = 0;
	if (argc < 2)
		take_input(fd);
	else
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			take_input(fd);
			i++;
		}
	}
	return (0);
}
