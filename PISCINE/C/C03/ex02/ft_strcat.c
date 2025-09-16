/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 11:43:42 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/07 15:42:11 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = temp;
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[20] = "Hello";
	char	src[] = " World";
	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
