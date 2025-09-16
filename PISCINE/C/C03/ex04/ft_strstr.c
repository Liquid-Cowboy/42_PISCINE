/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:25:46 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/09 11:05:12 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*reset_to_find;
	char	*temp_str;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		temp_str = str;
		reset_to_find = to_find;
		while (*temp_str == *to_find)
		{
			temp_str++;
			to_find++;
			if (*to_find == '\0')
				return (str);
		}
		to_find = reset_to_find;
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Hello World";
	char	*to_find = "World";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
