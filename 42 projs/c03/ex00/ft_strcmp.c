/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <ja3far77@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 08:49:36 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/02 13:40:48 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] == s2[c] && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

// int	main(void)
// {
// 	char s1[] = "bada k col";
// 	char s2[] = "ok cool";
// 	printf("%d ",ft_strcmp(s1, s2));
// }