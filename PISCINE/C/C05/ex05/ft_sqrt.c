/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:29:54 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/11 12:53:57 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	n;
	int	x;

	x = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (x != nb || x < nb)
	{
		n = x * x;
		if (n == nb)
			return (x);
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(-5));
	return (0);
}*/
