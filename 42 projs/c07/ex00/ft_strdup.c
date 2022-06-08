/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jal-wahe <ja3far77@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 02:16:29 by jal-wahe          #+#    #+#             */
/*   Updated: 2022/06/09 02:16:37 by jal-wahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*copy;

	i = 0;
	n = ft_strlen(src);
	copy = (char *)malloc(n * sizeof(char) + 1);
	if (copy == NULL)
		return (0);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*int main()
{
	char *copy = "Hello";
	char *paste = NULL;

	paste = ft_strdup(copy);
	printf("%s", paste);
}*/
