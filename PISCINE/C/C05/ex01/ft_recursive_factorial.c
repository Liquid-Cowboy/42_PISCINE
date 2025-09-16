/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 10:20:46 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/10 12:21:54 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = ft_recursive_factorial(nb - 1);
	return (nb * i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb = 1;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}*/
