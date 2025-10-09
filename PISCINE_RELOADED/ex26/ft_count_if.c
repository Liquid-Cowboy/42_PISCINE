/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:25:07 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/08 18:38:31 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	is_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	else
		return (0);
}
*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			i++;
		tab++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*tab[] = {"abc", "abc", NULL};

	printf("%d", ft_count_if(tab, is_a));
	return (0);
}*/
