/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:19:46 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/08 19:55:25 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ar;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	ar = malloc (sizeof(int) * len);
	if (!ar)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ar[i] = min;
		min++;
		i++;
	}
	return (ar);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int	min = 0;
	int	max = 10;
	int	*ar;
	ar = ft_range(min, max);
	for (i = 0; i < max - min; i++)
		printf("%d", ar[i]);
	return (0);
}*/
