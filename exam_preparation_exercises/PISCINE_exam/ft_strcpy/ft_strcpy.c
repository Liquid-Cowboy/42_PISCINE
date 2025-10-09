/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:19:36 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/11 17:05:37 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)

{
	char	*t;

	t = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (t);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[20];
	char	*s2 = "hello";

	printf("%s", ft_strcpy(s1, s2));
	return (0);
}*/
