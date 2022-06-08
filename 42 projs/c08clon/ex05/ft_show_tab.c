/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzuba <maalzuba@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:04:43 by maalzuba          #+#    #+#             */
/*   Updated: 2022/06/08 22:26:03 by maalzuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	unsigned int	ui;
	char			c;
	char			sign;
	int				div;

	sign = '-';
	ui = nb;
	if (nb < 0)
	{
		write(1, &sign, 1);
		ui *= -1;
	}
	div = ui / 10;
	c = ui;
	if (div)
	{
		ft_putnbr(ui / 10);
		c = ui - div * 10;
	}
	c += 48;
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
	}
}
