/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <ja3far77@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:03:00 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/05/30 09:09:12 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x1;
	unsigned int	x2;

	x1 = 0;
	x2 = 0;
	while (dest[x1] != '\0')
		x1++;
	while (src[x2] != '\0' && x2 < nb)
	{
		dest[x1] = src[x2];
			x1++;
			x2++;
	}
	dest[x1] = '\0';
	return (dest);
}
// int	main (void)
// {
// 	char dest[30] = "Hello";
// 	char src[] = "world";
// 	ft_strcat(dest, src);
// 	printf("%s", dest);
// }
