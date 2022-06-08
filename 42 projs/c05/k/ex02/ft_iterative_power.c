/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <jal-wahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 13:58:21 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/08 12:52:57 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			answer *= nb;
			i++;
		}
		return (answer);
	}
}
// int main()
// {
// 	int a;
// 	a = 3;
// 	printf("%d", 	ft_iterative_power(a,3));
// }