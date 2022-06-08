/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <ja3far77@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:17:50 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/01 14:22:27 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	chart;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, &"8", 1);
	}
	else if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(nb / (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		chart = nb % 10 + '0';
		write(1, &chart, 1);
	}
}
/*int main(void)
{
	ft_putnbr(42);
}*/
