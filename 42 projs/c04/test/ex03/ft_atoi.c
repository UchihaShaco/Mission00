/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <jal-wahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 10:01:20 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/05 12:09:50 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_pow_rec(int i, int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (i);
	return (i * ft_pow_rec(i, n - 1));
}

int	ft_atoi(char *str)
{
	long long	res;	
	int			neg;
	int			i;

	i = 0;
	res = 0;
	neg = 1;
	while (*str <= 32)
		str++;
	while (*str && ((*str == '-' || *str == '+')))
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str && ((*str >= '0' && *str <= '9')))
		str++;
	str--;
	while ((*str >= '0' && *str <= '9'))
	{
		res += ((*str--) - '0') * ft_pow_rec(10, i++);
	}
	return ((int)(res * neg));
}

// int main(void)
// {
// 	char	*str;
// 	str = "---+--+1234ab567";
// 	printf("%d\n", ft_atoi(str));
// }