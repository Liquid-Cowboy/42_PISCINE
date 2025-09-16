/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:50:14 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/10 14:36:40 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = nb;
	j = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (j < power - 1)
	{
		nb = nb * i;
		j++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;
	int	power;

	nb = -2;
	power = 3; //deve dar 8
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/
