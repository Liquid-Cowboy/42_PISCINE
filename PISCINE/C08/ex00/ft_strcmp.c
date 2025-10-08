/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:53:49 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/09 09:37:33 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "abc";
	char	*s2 = "abc";
	printf("%d", ft_strcmp(s1, s2));

	s1 = "acc";
        s2 = "abc";
        printf("\n%d", ft_strcmp(s1, s2));

	s1 = "abc";
        s2 = "acc";
        printf("\n%d", ft_strcmp(s1, s2));
	return (0);
}
*/
