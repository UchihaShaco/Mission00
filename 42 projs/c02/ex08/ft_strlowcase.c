/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <jal-wahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:42:38 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/07 01:09:33 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z'))
		{
		str[x] += 'a' - 'A';
		}
	x++;
	}
	return (str);
}
//int main(void)
//{
//	char y[] = "Lihg";
//	char *x = ft_strlowcase(y);
//	printf("%s\n", x);
//	return 0;
//}
