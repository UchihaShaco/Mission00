/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <ja3far77@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:27:04 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/05/29 19:27:41 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*(str++) != '\0')
	{
		l++;
	}
	return (l);
}
