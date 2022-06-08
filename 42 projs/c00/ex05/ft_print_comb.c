/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <ja3far77@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:53:52 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/05/26 11:21:18 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write (1, &c, 1);
				if (a != '7')
					write (1, ",", 1);
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }	
