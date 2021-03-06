/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <jal-wahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:42:11 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/04 15:22:08 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	ls;
	int	x;

	ls = 1;
	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 'a' && str[x] <= 'z'))
		{
		ls = 0;
		}
	x++;
	}
	return (ls);
}
