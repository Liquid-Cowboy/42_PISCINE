/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:34:47 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/07 13:01:09 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
	{
		while (src[j])
			j++;
		return (j);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	while (src[j])
		j++;
	return (j);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[4];
	char	src[] = "ola";
	unsigned int	size = 0;
	ft_strlcpy(dest, src, size);
	printf("%s", dest);
	printf("%u", ft_strlcpy(dest, src, size));
	return (0);
}
*/
