/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:09:24 by hczuba            #+#    #+#             */
/*   Updated: 2016/08/01 13:09:27 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_2_H
# define RUSH_2_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int		rush_00(int w, int h, char *test);
int		rush_01(int w, int h, char *test);
int		rush_02(int w, int h, char *test);
int		rush_03(int w, int h, char *test);
int		rush_04(int w, int h, char *test);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
void	test_rush(int w, int h, char *input);
int		calculate_width(char *str);
int		calculate_height(char *str);

#endif
