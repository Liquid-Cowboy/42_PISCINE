/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:57:03 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/02 10:47:51 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int	a;
	int	b;
	a = 7;
	b = 2;
	printf("%d a dividir por %d ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("da %d e %d", a, b);
	return (0);
}
*/
