/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:25:21 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/13 18:07:49 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ar;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	ar = malloc(len * sizeof(int));
	if (!ar)
		return (NULL);
	while (min < max)
	{
		ar[i] = min;
		i++;
		min++;
	}
	return (ar);
}
/*
int	main(void)
{	
	int len = 20 - 10;
	int	*ar = ft_range(10, 20);
	for (int i = 0; i < len; i++)
		printf("%d", ar[i]);
	free(ar);
	return (0);
}*/
