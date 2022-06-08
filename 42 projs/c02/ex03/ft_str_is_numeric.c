/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <jal-wahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:39:50 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/04 15:22:06 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	num;
	int	x;

	num = 1;
	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= '0' && str[x] <= '9'))
		{
		num = 0;
		}
	x++;
	}
	return (num);
}