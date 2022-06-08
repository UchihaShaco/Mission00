/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzuba <maalzuba@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:40:34 by maalzuba          #+#    #+#             */
/*   Updated: 2022/06/08 22:30:12 by maalzuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!s)
		return (NULL);
	while (*(src + i))
	{
		*(s + i) = *(src + i);
		i++;
	}
	*(s + i) = '\0';
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stocks;
	int					i;

	stocks = (struct s_stock_str *) malloc(sizeof(struct s_stock_str) * ac);
	stocks[ac - 1].size = 0;
	stocks[ac - 1].str = 0;
	stocks[ac - 1].copy = 0;
	i = 1;
	while (i < ac)
	{
		stocks[i - 1].size = ft_strlen(av[i]);
		stocks[i - 1].str = av[i];
		stocks[i - 1].copy = ft_strdup(stocks[i - 1].str);
		i++;
	}
}
