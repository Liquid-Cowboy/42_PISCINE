/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:15:35 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/14 12:32:28 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}

#include <stdio.h>
int	main(void)
{
	int	*range;
	int	i;
	int	len;

	len = ft_ultimate_range(&range, -5, 15);
	while (i < len)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free (range);
//	printf("%d\n", (*range) + 1);
	return (0);
}
