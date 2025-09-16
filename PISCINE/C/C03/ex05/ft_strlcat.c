/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:29:29 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/09 11:54:18 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (size);
	while (dest[i] && i < size)
		i++;
	if (i == size)
		return (size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i == size)
		return (size);
	if (i < size)
		dest[i] = '\0';
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[20] = "Hello";
	char	*src = "World";
	unsigned int	size = 8;
	printf("%u", ft_strlcat(dest, src, size));
	printf("\n%s", dest);
	return (0);	
}*/
