/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:50:07 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/08 19:31:09 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i == nb / i && nb % i == 0)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
	return (0);
}*/
