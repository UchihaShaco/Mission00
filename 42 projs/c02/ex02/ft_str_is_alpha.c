/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <jal-wahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:18:10 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/06 17:43:33 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str [c] != '\0')
	{
		if (!(str[c] >= 'a' && str[c] <= 'z')
			&& !(str[c] >= 'A' && str[c] <= 'Z'))
			return (0);
		c++;
	}
	return (1);
}
//int main(void)
//{
//	int x = ft_str_is_alpha("45");
//	printf("%d\n", x);
//	return 0;
//}
