/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:59:45 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/11 16:44:11 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (x < nb)
	{
		if ((nb % x) == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(4));
	return (0);
}*/
