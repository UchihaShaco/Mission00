/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <jal-wahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:47:39 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/07 17:40:33 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z'))
		{
		str[x] -= 32;
		}
	x++;
	}
	return (str);
}
/*int main()
{
	char a[] = " SDASs jksdksalhdksl";
	int j = 0;
	ft_strupcase(ar);
	while(ar[j] != '\0')
	{
		printf("%c" ,ar[j]);
		j++;
	}
}*/
