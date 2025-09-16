/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:24:22 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/10 14:29:57 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (1);
	i = nb -1;
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb = -2;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}*/
